#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>

int	main()
{
	Animal	organism;
	// Dog		koko;
	// Dog		jumpy(koko);
	Animal *falafel = new Dog();

	std::cout	<< "\n>>>>>>>> Type check! <<<<<<<<<<"
				<< std::endl;
	
	std::cout	<< "organism is of type "
				<< organism.get_type ()
				<< std::endl;

	std::cout	<< "falafel is of type "
				<< falafel->get_type ()
				<< std::endl;

	// std::cout	<< "koko is of type "
	// 			<< koko.get_type ()
	// 			<< std::endl;

	// std::cout	<< "jumpy is of type"
	// 			<< jumpy.get_type ()
	// 			<< std::endl;

	std::cout	<< "\n>>>>>>>> Sound check! <<<<<<<<<<"
				<< std::endl;

	organism.makeSound ();
	// koko.makeSound ();
	// jumpy.makeSound ();
	falafel->makeSound ();

	std::cout	<< "\n>>>>>>>> end of the world! <<<<<<<<<"
				<< std::endl;

	delete falafel;
	return (0);
}

