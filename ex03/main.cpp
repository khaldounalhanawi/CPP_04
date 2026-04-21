#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"


// AMateria tests
// int	main()
// {
// 	AMateria *z = new Ice();
// 	Ice a;
// 	Ice b(a);
// 	Ice c;
// 	Cure j;
// 	Cure d (j);
// 	Cure e;

// 	c = a;
// 	e = d;

// 	std::cout	<< "******** Polymophism tests\n";

// 	std::cout	<< z->getType ()
// 				<< " is here!!\n"
// 				<< std::endl;

// 	// save z location in temp
// 	AMateria *temp = z;
// 	// make z point to a differnt AMateria object (Cure type)
// 	z = &d;
// 	// print out the new z content
// 	std::cout	<< z->getType ()
// 				<< " is here!!\n"
// 				<< std::endl;

// 	std::cout	<< "**************************\n";

// 	delete temp;
// }

// MateriaSource tests
int	main()
{
	AMateria		*a1 = new Ice();
	AMateria		*b1 = new Cure();
	Ice	aa;
	Ice bb;
	Cure zz;
	MateriaSource	src;
	MateriaSource	b(src);
	MateriaSource	*c = new MateriaSource;

	*c = src;

	std::cout	<< "******** Learn() tests\n\n";

	src.learnMateria (a1);
	src.learnMateria (b1);
	src.learnMateria (&aa);
	src.learnMateria (&bb);
	src.learnMateria (&zz);
	src.learnMateria (&aa);

	std::cout	<< "**************************\n";


	delete c;
	delete a1;
	delete b1;
	return (0);
}