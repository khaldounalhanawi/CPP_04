#include "Dog.hpp"
#include "iostream"

Dog::Dog() : Animal (),
_type("Dog")
{
	std::cout	<< "A Dog is created!"
				<< std::endl;
	return ;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	this->_type = other._type;

	std::cout	<< "copy of a dog was created!"
				<< std::endl;
	return ;
}

Dog &Dog::operator=(const Dog &source)
{
	if (this == &source)
		this->_type = source._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout	<< this->_type
				<< " has died.."
				<< std::endl;
	return ;
}

void Dog::makeSound(void) const
{
	std::cout	<< this->_type
				<< " goes Ruf Ruf!"
				<< std::endl;
	return ;
}

std::string	&Dog::get_type(void)
{
	return (this->_type);
}
