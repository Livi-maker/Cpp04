#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(void) : Animal()
{
	type = "Dog";
	std::cout << "It's a " << this->type << "!" << std::endl;
}

Dog::Dog(const Dog& old) : Animal(old)
{
	*this = old;
	std::cout << "Two identical dogs!" << std::endl;
}

Dog& Dog::operator = (const Dog& old)
{
	this->type = old.type;
	std::cout << "copy assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "The dog is running away.." << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wuff" << std::endl;
}