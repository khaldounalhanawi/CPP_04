#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"

int	main()
{
	AMateria *z = new Ice();
	Ice a;
	Ice b(a);
	Ice c;
	Cure j;
	Cure d (j);
	Cure e;

	c = a;
	e = d;

	std::cout	<< "******** Polymophism tests\n";

	std::cout	<< z->getType ()
				<< " is here!!\n"
				<< std::endl;

	// save z location in temp
	AMateria *temp = z;
	// make z point to a differnt AMateria object (Cure type)
	z = &d;
	// print out the new z content
	std::cout	<< z->getType ()
				<< " is here!!\n"
				<< std::endl;

	std::cout	<< "**************************\n";

	delete temp;
}