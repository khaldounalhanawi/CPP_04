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

	try
	{
		a.setIdea(1, "Mama mia");
		a.setIdea(0, "hola cola");
		a.setIdea(3, "falafel");
		// a.setIdea(-1, "burger");
		// a.setIdea(99, "halloumi");
	}
	catch (const std::exception &e)
	{
		std::cout << "ERROR: "<< e.what() << std::endl;
		return (1);
	}

	b = a;

	int	i = 0;
	while (i < 5)
	{
		std::cout	<< b.getIdea(i) << "\n";
		i ++;
	}
	return (0);
}