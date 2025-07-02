#include "Animal.hpp"

Animal::Animal(void) : type("animal")
{
	std::cout << "Is it an animal?" << std::endl;
}

Animal::Animal(const Animal& old) : type("animal")
{
	*this = old;
	std::cout << "Animal class created from another object" << std::endl;
}

Animal& Animal::operator = (const Animal& old)
{
	std::cout << "class copied" << std::endl;
	this->type = old.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal class was destroyed" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "I can't hear" << std::endl;
}