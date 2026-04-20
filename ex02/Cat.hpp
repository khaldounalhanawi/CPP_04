#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

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
		Brain		*getBrain(void) const;

	protected:
		std::string _type;

	private:
		Brain	*_brain;
};

#endif