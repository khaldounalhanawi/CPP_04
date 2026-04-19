#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat ();
		Cat (Cat const &copy);
		~Cat ();
		
		// operator overload
		Cat &operator=(Cat const &source);

		// member functions
		std::string	getType(void) const;
		void		makeSound(void) const;

	protected:
		std::string _type;
};

#endif