#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	type = "Cat";
	std::cout << "It's a cat!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& old) : WrongAnimal(old)
{
	*this = old;
	std::cout << "Two identical cats!" << std::endl;
}

WrongCat& WrongCat::operator = (const WrongCat& old)
{
	this->type = old.type;
	std::cout << "copy assignment operator called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "The cat is going away.." << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Muuuu" << std::endl;
}