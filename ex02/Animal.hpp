#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class	Animal
{
	public:
		Animal();
		Animal(const Animal &other);
		virtual ~Animal();

		// operator overload
		Animal &operator=(const Animal &other);

		// member functions
		virtual std::string	getType () const = 0;
		virtual void		makeSound(void) const = 0;

	protected:
		std::string _type;
};

#endif
