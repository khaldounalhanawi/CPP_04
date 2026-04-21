#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"


class Character : public ICharacter
{
	public:
		Character(std::string name);
		Character(const Character& other);
		~Character();

		Character &operator=(const Character& source);

		// Interface functions
		std::string const & getName() const;
		void equip(AMateria* m);
		// void unequip(int idx);
		// void use(int idx, ICharacter& target);

		// Getters & setters
		const AMateria	*getInventoryItem(int index) const;

		// testers
		void	printInventory() const;

	private:
		std::string	_name;
		AMateria	*inventory[4];

};

#endif