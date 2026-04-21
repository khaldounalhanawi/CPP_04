#include "Ice.hpp"
#include <iostream>


Ice::Ice():
AMateria("ice"),
_type("ice")
{
	std::cout	<< "Ice has been created!\n" << std::endl;
	return ;
}

Ice::Ice(const Ice& other):
AMateria ("ice"),
_type("ice")
{
	this->_name = other.getName ();
	std::cout	<< "Ice is created from a copy\n" << std::endl;
	return ;
}

Ice::~Ice()
{
	std::cout	<< "Ice is ended!" << std::endl;
	return ;
}

Ice& Ice::operator=(const Ice& source)
{
	if (this != &source)
		this->_name = source.getName ();
	std::cout	<< "Ice is copied from an = operator\n" << std::endl;

	return (*this);
}

const std::string	&Ice::getName() const
{
	return (this->_name);
}

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout	<< "* shoots an ice bolt at " 
				<< target.getName ()
				<< " *"
				<< std::endl;
}