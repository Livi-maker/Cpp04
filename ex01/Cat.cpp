#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Cat::Cat(void) : Animal()
{
	type = "Cat";
	_brain = new Brain();
	std::cout << "It's a cat!" << std::endl;
}

Cat::Cat(const Cat& old) : Animal(old)
{
	*this = old;
	std::cout << "Two identical cats!" << std::endl;
}

Cat& Cat::operator = (const Cat& old)
{
	this->type = old.type;
	_brain = old._brain;
	std::cout << "copy assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "The cat is going away.." << std::endl;
	delete _brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}