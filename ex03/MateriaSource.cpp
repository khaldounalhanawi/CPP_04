#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : IMateriaSource() , _indexCounter(0)
{
	for (int i = 0; i < 4; i++)
		this->_MateriaArray[i] = NULL;

	std::cout	<< "MateriaSource has been created!\n" << std::endl;
	return;
}

MateriaSource::MateriaSource(const MateriaSource& other) : IMateriaSource(), _indexCounter(other._indexCounter)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._MateriaArray[i])
			this->_MateriaArray[i] = other._MateriaArray[i]->clone ();
		else
			this->_MateriaArray[i] = NULL;
	}
	std::cout	<< "MateriaSource has been copy created!\n" << std::endl;

	return;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_MateriaArray[i])
			delete this->_MateriaArray[i];
	}

	std::cout	<< "MateriaSource has ended..\n" << std::endl;
	return;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& source)
{
	if (this != &source)
	{
		for (int i = 0; i < 4; i++)
		{
			this->_indexCounter = source._indexCounter;
			if (source._MateriaArray[i])
				this->_MateriaArray[i] = source._MateriaArray[i]->clone ();
			else
				this->_MateriaArray[i] = NULL;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* source)
{
	// limit slots to 4
	_indexCounter = _indexCounter % 4;
	// Delete item at current index (Avoid leak!)
	if (this->_MateriaArray[_indexCounter])
		delete this->_MateriaArray[_indexCounter];
	// clone to index
	this->_MateriaArray[_indexCounter] = source->clone ();

	std::cout	<< "Materia learned and assign to slot "<< _indexCounter << "..\n" << std::endl;
	// Incriment index value
	_indexCounter ++;
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i ++)
	{
		if (this->_MateriaArray[i] && this->_MateriaArray[i]->getType() == type)
			return (this->_MateriaArray[i]->clone ());
	}

	std::cout	<< "No Match found to create Materia "<< type <<"..\n" << std::endl;
	return (0);
}
