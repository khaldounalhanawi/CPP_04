#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure ();
		Cure (Cure const &copy);
		~Cure ();

		// Operator overrides
		Cure &operator=(Cure const &source);

		// Setters & Getters
		const std::string	&getName() const;

		// Member functions
		AMateria	*clone() const;
		// void		use(ICharacter& target);

	private:
		std::string	_type;
		std::string	_name;
};

#endif