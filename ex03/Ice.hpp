#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice ();
		Ice (Ice const &copy);
		~Ice ();

		// Operator overrides
		Ice &operator=(Ice const &source);

		// Setters & Getters
		const std::string	&getName() const;

		// Member functions
		AMateria	*clone() const;
		void		use(ICharacter& target);

	private:
		std::string	_type;
		std::string	_name;
};

#endif