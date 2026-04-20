#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include "Brain.hpp"


// int main()
// {
// 	Animal *animals[14];

// 	for (int i = 0; i < 7; i ++)
// 		animals[i] = new Dog ();

// 	for (int i = 7; i < 14; i ++)
// 		animals[i] = new Cat ();

// 	std::cout	<< "\n****************sounds \n\n";

// 	for (int i = 0; i < 14; i ++)
// 		animals[i]->makeSound();

// 	std::cout	<< "\n****************deleting \n\n";

// 	for (int i = 0; i < 14; i ++)
// 		delete (animals[i]);

// 	return (0);
// }


// poly morphysim leak on destruction test

// int	main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	delete j;//should not create a leak
// 	delete i;

// 	return 0;
// }


// deep copy test
int	main()
{
	Dog original;
	Animal a = original;
	Dog b = original;
	Dog c;
	Cat z;
	Cat y (z);
	Cat f;

	f = z;
	c = b;

	a.makeSound ();
	b.makeSound ();
}