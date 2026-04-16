#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class	WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		virtual ~WrongAnimal();

		// operator overload
		WrongAnimal &operator=(const WrongAnimal &other);

		// member functions
		virtual std::string	getType () const;
		void		makeSound(void) const;

	protected:
		std::string _type;
};

#endif
