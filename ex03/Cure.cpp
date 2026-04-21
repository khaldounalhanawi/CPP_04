#include "Cure.hpp"
#include <iostream>


Cure::Cure():
AMateria("cure"),
_type("cure")
{
	std::cout	<< "Cure has been created!\n" << std::endl;
	return ;
}

Cure::Cure(const Cure& other):
AMateria ("cure"),
_type("cure")
{
	this->_name = other.getName ();
	std::cout	<< "Cure is created from a copy\n" << std::endl;
	return ;
}

Cure::~Cure()
{
	std::cout	<< "Cure is ended!" << std::endl;
	return ;
}

Cure& Cure::operator=(const Cure& source)
{
	if (this != &source)
		this->_name = source.getName ();
	std::cout	<< "Cure is copied from an = operator\n" << std::endl;

	return (*this);
}

const std::string	&Cure::getName() const
{
	return (this->_name);
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}
