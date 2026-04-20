#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

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
		Brain		*getBrain(void) const;

	protected:
		std::string _type;
	
	private:
		Brain	*_brain;

};

#endif