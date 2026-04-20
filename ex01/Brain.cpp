#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout	<< "\tNew Brain has been created!"
				<< std::endl;
	return ;
}

Brain::Brain(const Brain& other)
{
	int	i;

	std::cout	<< "\tNew Brain has been created via Copy!"
				<< std::endl;

	i = 0;
	while (i < 100)
	{
		this->_ideas[i] = other._ideas[i];
		i ++;
	}
	return ;
}

Brain::~Brain()
{
	std::cout	<< "A Brain has been DELETED!"
				<< std::endl;
	return ;
}

Brain& Brain::operator=(const Brain& source)
{
	int	i;

	std::cout	<< "Brain equals another brain!"
				<< std::endl;

	if (&this->_ideas[0] == &(source.getIdea(0)))
		return (*this);

	i = 0;
	while (i < 100)
	{
		this->_ideas[i] = source._ideas[i];
		i ++;
	}

	return (*this);
}

const std::string	&Brain::getIdea(int index) const
{
	// error handling if out of bounds
	if (index < 0 || index > 99)
		throw std::out_of_range ("Idea index must be >= 0 and < 100");
	// return string array element at index
	return (this->_ideas[index]);
}

void	Brain::setIdea(int index, std::string content)
{
	// error handling if out of bounds
	if (index < 0 || index > 99)
		throw std::out_of_range ("Idea index must be >= 0 and < 100");
	// override content at index
	this->_ideas[index] = content;
}
