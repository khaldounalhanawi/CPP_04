#include "Character.hpp"
#include <iostream>

Character::Character(std::string name):
ICharacter(),
_name(name)
{
	for (int i = 0; i < 4; i ++)
		this->inventory[i] = NULL;

	std::cout	<< "Character "
				<< name 
				<< " has been created!\n" 
				<< std::endl;
	return ;
}

Character::Character(const Character& other):
ICharacter(),
_name(other.getName ())
{
	for (int i = 0; i < 4; i ++)
	{
		if (other.getInventoryItem(i))
			this->inventory[i] = other.getInventoryItem(i)->clone();
		else
			this->inventory[i] = NULL;
	}

	std::cout	<< "Character "
				<< other.getName () 
				<< " has been copy created!\n" 
				<< std::endl;
	return ;
}

Character& Character::operator=(const Character& source)
{
	if (this == &source)
		return (*this);

	this->_name = source.getName ();

	for (int i = 0; i < 4; i ++)
	{
		if (source.getInventoryItem(i))
		{
			delete this->inventory[i];
			this->inventory[i] = source.getInventoryItem(i)->clone();
		}
	}

	std::cout	<< "Character "
				<< source.getName () 
				<< " has been operator copied!\n" 
				<< std::endl;

	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i ++)
		if (this->inventory[i])
			delete this->inventory[i];

	std::cout	<< "Character "
				<< this->_name
				<< " has died!\n" 
				<< std::endl;

	return ;
}

std::string const &Character::getName() const
{
	return (this->_name);
}

const AMateria	*Character::getInventoryItem(int index) const
{
	if (this->inventory[index])
		return (this->inventory[index]);
	else
		return (NULL);
}
