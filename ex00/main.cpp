#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>

int	main()
{
	Animal organism;
	Dog koko;
	Dog jumpy (koko);

	std::cout	<< "\n>>>>>>>> Sound check! <<<<<<<<<<"
				<< std::endl;

	organism.makeSound ();
	koko.makeSound ();
	jumpy.makeSound ();

	std::cout	<< "\n>>>>>>>> end of the world! <<<<<<<<<"
				<< std::endl;

	return (0);
}