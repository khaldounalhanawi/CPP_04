#include "WrongAnimal.hpp"
#include "iostream"

WrongAnimal::WrongAnimal():
_type("Teresstrial")
{
	std::cout	<< "One terresstrail Wronganimal was created!"
				<< std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	this->_type = other._type;
	std::cout	<< "copy of a terresstrail Wronganimal was created!"
				<< std::endl;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout	<< "A terresstrail Wronganimal has died.."
				<< std::endl;
	return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& source)
{
	if (this == &source)
		this->_type = source._type;
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout	<< this->_type
				<< " Wronganimal makes any sound!"
				<< std::endl;
	return ;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}