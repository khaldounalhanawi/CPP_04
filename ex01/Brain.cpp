#include "Brain.hpp"

Brain::Brain()
{
	return ;
}

Brain::Brain(const Brain& other)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		this->_ideas[i] = other._ideas[i];
		i ++;
	}
	return ;
}

Brain::~Brain()
{
	return ;
}

Brain& Brain::operator=(const Brain& source)
{
	int	i;

	if (&this->_ideas[0] == &(source.getIdea(0)))
		return (*this);

	i = 0;
	while (i < 100)
	{
		this->_ideas[i] = source._ideas[i];
		i ++;
	}

	return (*this);
}

const std::string	&Brain::getIdea(int index) const
{
	return (this->_ideas[index]);
}

void	Brain::setIdea(int index, std::string content)
{
	this->_ideas[index] = content;
}
