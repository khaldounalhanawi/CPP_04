#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria (std::string const & type);
		AMateria (AMateria const &copy);
		virtual ~AMateria ();

		// Operator overrides
		AMateria &operator=(AMateria const &source);

		// Setters & Getters
		std::string const & getType() const; //Returns the materia type

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
