#include "AMateria.hpp"
#include <iostream>


AMateria::AMateria(std::string const & type):
_type(type)
{
	std::cout	<< "AMateria has been created!" << std::endl;
	return ;
}

AMateria::AMateria(const AMateria& other)
{
	std::cout	<< "AMateria is created from a copy" << std::endl;
	this->_type = other.getType ();
	return ;
}

AMateria::~AMateria()
{
	std::cout	<< "AMateria is ended!\n" << std::endl;
	return ;
}

AMateria	&AMateria::operator=(const AMateria& source)
{
	if (this != &source)
		this->_type = source.getType ();
	std::cout	<< "AMateria is copied from an = operator" << std::endl;
	return *this;
}

void	AMateria::use(ICharacter& target)
{
	(void) target;
	std::cout	<< "AMateria use function used"
				<< std:: endl;
	return ;
}

std::string const	&AMateria::getType() const
{
	return (this->_type);
}
