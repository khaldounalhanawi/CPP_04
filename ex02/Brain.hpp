#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
	public:
		Brain ();
		Brain (Brain const &copy);
		~Brain ();
		
		// Operator overrides
		Brain &operator=(Brain const &source);

		// Setters & Getters
		const std::string	&getIdea(int index) const;
		void				setIdea(int index, std::string content);

	private:
		std::string	_ideas[100];
};

#endif
