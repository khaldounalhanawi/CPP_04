#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

// int	main()
// {
// 	Animal	organism;
// 	Dog		koko;
// 	// Dog		jumpy(koko);
// 	Animal *falafel = new Dog();
// 	Dog		*dd = new Dog();
// 	// Dog	test1(*falafel);
// 	Animal todog (koko);


// 	std::cout	<< "\n>>>>>>>> Type check! <<<<<<<<<<"
// 				<< std::endl;
	
// 	std::cout	<< "organism is of type "
// 				<< organism.get_type ()
// 				<< std::endl;

// 	std::cout	<< "falafel is of type "
// 				<< falafel->get_type ()
// 				<< std::endl;

// 	// std::cout	<< "koko is of type "
// 	// 			<< koko.get_type ()
// 	// 			<< std::endl;

// 	// std::cout	<< "jumpy is of type"
// 	// 			<< jumpy.get_type ()
// 	// 			<< std::endl;

// 	std::cout	<< "\n>>>>>>>> Sound check! <<<<<<<<<<"
// 				<< std::endl;

// 	organism.makeSound ();
// 	// koko.makeSound ();
// 	// jumpy.makeSound ();
// 	falafel->makeSound ();

// 	std::cout	<< "\n>>>>>>>> end of the world! <<<<<<<<<"
// 				<< std::endl;

// 	delete falafel;
// 	return (0);
// }

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* FAKE = new WrongCat();

	std::cout	<< "\n>>>>>>>> Type check! <<<<<<<<<<"
				<< std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;

	std::cout	<< "\n>>>>>>>> Sound check! <<<<<<<<<<"
				<< std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	FAKE->makeSound ();

	std::cout	<< "\n>>>>>>>> end of the world! <<<<<<<<<"
				<< std::endl;

	delete i;
	delete j;
	delete meta;
	delete FAKE;
	return 0;
}