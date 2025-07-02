#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("animal")
{
	std::cout << "Wrong Animal created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& old) : type("animal")
{
	*this = old;
	std::cout << "Wrong Animal class created from another object" << std::endl;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& old)
{
	std::cout << "wrong class copied" << std::endl;
	this->type = old.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Animal class was destroyed" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Beeeee" << std::endl;
}