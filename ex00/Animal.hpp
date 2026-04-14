#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class	Animal
{
	public:
		Animal();
		Animal(const Animal &other);
		virtual ~Animal();

		Animal &operator=(const Animal &other);

		virtual std::string	&get_type ();
		virtual void	makeSound(void) const;

	protected:
		std::string _type;
};

#endif
