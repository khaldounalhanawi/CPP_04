#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat ();
		WrongCat (WrongCat const &copy);
		~WrongCat ();
		
		// operator overload
		WrongCat &operator=(WrongCat const &source);

		// member functions
		std::string	getType(void) const;
		void		makeSound(void) const;

	protected:
		std::string _type;
};

#endif