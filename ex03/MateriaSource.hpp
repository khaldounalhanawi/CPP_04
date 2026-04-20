#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource ();
		MateriaSource (MateriaSource const &copy);
		~MateriaSource ();

		// Operator overrides
		MateriaSource &operator=(MateriaSource const &source);

		// Setters & Getters

		// Interface
		void		learnMateria(AMateria*);
		AMateria	*createMateria(std::string const & type);

	private:
		AMateria	*_MateriaArray[4];
		
};

#endif

/*
learnMateria(AMateria*)
Copies the Materia passed as a parameter and stores it in memory so it can be cloned
later. Like the Character, the MateriaSource can know at most 4 Materias. They
are not necessarily unique.


• createMateria(std::string const &)
Returns a new Materia. The latter is a copy of the Materia previously learned by
the MateriaSource whose type equals the one passed as parameter. Returns 0 if
the type is unknown.


In a nutshell, your MateriaSource must be able to learn "templates" of Materias to
create them when needed. Then, you will be able to generate a new Materia using just
a string that identifies its type.
*/