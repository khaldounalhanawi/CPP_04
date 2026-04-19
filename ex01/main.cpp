#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include "Brain.hpp"

int main()
{
	Brain a;
	Brain b;

	a.setIdea(0, "hola mola");
	a.setIdea(1, "fiona ma");

	b = a;

	int	i = 0;
	while (i < 5)
	{
		std::cout	<< b.getIdea(i) << "\n";
		i ++;
	}

}