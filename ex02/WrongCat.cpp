#include "WrongCat.hpp"
#include "iostream"

WrongCat::WrongCat() : WrongAnimal (),
_type("Generic WrongCat")
{
	std::cout	<< "A WrongCat is created!"
				<< std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	this->_type = other._type;

	std::cout	<< "copy of a WrongCat was created!"
				<< std::endl;
	return ;
}

WrongCat &WrongCat::operator=(const WrongCat &source)
{
	if (this == &source)
		this->_type = source._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout	<< this->_type
				<< " has died.."
				<< std::endl;
	return ;
}

void WrongCat::makeSound(void) const
{
	std::cout	<< this->_type
				<< " goes MEeeeaaww!"
				<< std::endl;
	return ;
}

std::string	WrongCat::getType(void) const
{
	return (this->_type);
}
