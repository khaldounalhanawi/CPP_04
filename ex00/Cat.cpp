#include "Cat.hpp"
#include "iostream"

Cat::Cat() : Animal (),
_type("Generic Cat")
{
	std::cout	<< "A Cat is created!"
				<< std::endl;
	return ;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	this->_type = other._type;

	std::cout	<< "copy of a Cat was created!"
				<< std::endl;
	return ;
}

Cat &Cat::operator=(const Cat &source)
{
	if (this == &source)
		this->_type = source._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout	<< this->_type
				<< " has died.."
				<< std::endl;
	return ;
}

void Cat::makeSound(void) const
{
	std::cout	<< this->_type
				<< " goes MEeeeaaww!"
				<< std::endl;
	return ;
}

std::string	Cat::getType(void) const
{
	return (this->_type);
}
