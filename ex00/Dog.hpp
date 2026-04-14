#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog ();
		Dog (Dog const &copy);
		Dog &operator=(Dog const &source);
		~Dog ();

		std::string	&get_type(void);
		void		makeSound(void) const;

	protected:
		std::string _type;
};

#endif