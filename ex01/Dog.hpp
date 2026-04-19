#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog ();
		Dog (Dog const &copy);
		~Dog ();
		
		// operator overload
		Dog &operator=(Dog const &source);

		// member functions
		std::string	getType(void) const;
		void		makeSound(void) const;

	protected:
		std::string _type;
};

#endif