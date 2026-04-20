#include "Cat.hpp"
#include "iostream"

Cat::Cat() : Animal (),
_type("Generic Cat"),
_brain(new Brain())
{
	std::cout	<< "\t\tA Cat is created!"
				<< std::endl;
	return ;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	this->_type = other._type;
	this->_brain = new Brain (*other.getBrain ());

	std::cout	<< "\t\tcopy of a Cat was created!"
				<< std::endl;
	return ;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout	<< this->_type
				<< " has died.."
				<< std::endl;
	return ;
}

Cat &Cat::operator=(const Cat &source)
{
	if (this != &source)
	{
		this->_type = source._type;
		delete this->_brain;
		this->_brain = new Brain (*source.getBrain ());
	}
	return (*this);
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

Brain *Cat::getBrain() const
{
	return (this->_brain);
}