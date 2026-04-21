#include "Character.hpp"
#include <iostream>

Character::Character(std::string name):
ICharacter(),
_name(name)
{
	for (int i = 0; i < 4; i ++)
		this->inventory[i] = NULL;

	std::cout	<< "Character "
				<< name 
				<< " has been created!\n" 
				<< std::endl;
	return ;
}

Character::Character(const Character& other):
ICharacter(),
_name(other.getName ())
{
	for (int i = 0; i < 4; i ++)
	{
		if (other.getInventoryItem(i))
			this->inventory[i] = other.getInventoryItem(i)->clone();
		else
			this->inventory[i] = NULL;
	}

	std::cout	<< "Character "
				<< other.getName () 
				<< " has been copy created!\n" 
				<< std::endl;
	return ;
}

Character& Character::operator=(const Character& source)
{
	if (this == &source)
		return (*this);

	this->_name = source.getName ();

	for (int i = 0; i < 4; i ++)
	{
		if (source.getInventoryItem(i))
		{
			delete this->inventory[i];
			this->inventory[i] = source.getInventoryItem(i)->clone();
		}
	}

	std::cout	<< "Character "
				<< source.getName () 
				<< " has been operator copied!\n" 
				<< std::endl;

	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i ++)
		if (this->inventory[i])
			delete this->inventory[i];

	std::cout	<< "Character "
				<< this->_name
				<< " has died!\n" 
				<< std::endl;

	return ;
}

std::string const &Character::getName() const
{
	return (this->_name);
}

const AMateria	*Character::getInventoryItem(int index) const
{
	if (this->inventory[index])
		return (this->inventory[index]);
	else
		return (NULL);
}

void Character::equip(AMateria* m)
{
	int		i = 0;

	while (i < 4)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m->clone ();

			std::cout	<< this->_name
						<< " has gained "
						<< m->getType ()
						<< std::endl;

			delete m;

			break;
		}
		i ++;
	}
	return ;
}

void	Character::printInventory() const
{
	std::cout	<< this->_name << " inventory:\n";

	for (int i = 0; i < 4; i ++)
	{
		if (this->inventory[i])
		{
			std::cout	<< this->inventory[i]->getType ()
						<< std::endl;
		}
	}
}

void Character::unequip(int idx)
{
	if (this->inventory[idx])
		this->inventory[idx] = NULL;
	return ;
}

void Character::use(int idx, ICharacter& target)
{
	if (!this->inventory[idx])
		return ;
	this->inventory[idx]->use (target);
}
