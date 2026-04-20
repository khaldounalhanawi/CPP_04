#include "Dog.hpp"
#include "iostream"
#include "Brain.hpp"

Dog::Dog() : Animal (),
_type("Generic Dog"),
_brain(new Brain())
{
	std::cout	<< "\t\tA Dog is created!"
				<< std::endl;
	return ;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	this->_type = other._type;
	this->_brain = new Brain(*other.getBrain ());

	std::cout	<< "\t\tcopy of a dog was created!"
				<< std::endl;
	return ;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout	<< this->_type
				<< " has died.."
				<< std::endl;
	return ;
}

Dog &Dog::operator=(const Dog &source)
{
	if (this != &source)
	{
		this->_type = source._type;
		delete this->_brain;
		this->_brain = new Brain (*source.getBrain ());
	}
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout	<< this->_type
				<< " goes Ruf Ruf!"
				<< std::endl;
	return ;
}

std::string	Dog::getType(void) const
{
	return (this->_type);
}

Brain *Dog::getBrain() const
{
	return (this->_brain);
}