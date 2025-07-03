#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& old)
{
	*this = old;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator = (const Brain& old)
{
	int i;

	for (i = 0; i < 100; i++)
		ideas[i] = old.ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}