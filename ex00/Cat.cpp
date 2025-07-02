#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void) : Animal()
{
	type = "Cat";
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
	std::cout << "copy assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "The cat is going away.." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}