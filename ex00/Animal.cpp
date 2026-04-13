#include "Animal.hpp"
#include "iostream"

Animal::Animal():
_type("Teresstrial")
{
	std::cout	<< "One terresstrail animal was created!"
				<< std::endl;
	return ;
}

Animal::Animal(const Animal& other)
{
	this->_type = other._type;
	std::cout	<< "copy of a terresstrail animal was created!"
				<< std::endl;
	return ;
}

Animal::~Animal()
{
	std::cout	<< "A terresstrail animal has died.."
				<< std::endl;
	return ;
}

Animal& Animal::operator=(const Animal& source)
{
	if (this == &source)
		this->_type = source._type;
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout	<< this->_type
				<< " animal makes any sound!"
				<< std::endl;
	return ;
}
