#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Dog::Dog(void) : Animal()
{
	type = "Dog";
	_brain = new Brain();
	std::cout << "It's a " << this->type << "!" << std::endl;
}

Dog::Dog(const Dog& old) : Animal(old)
{
	_brain = 0;
	*this = old;
	std::cout << "Two identical dogs!" << std::endl;
}

Dog& Dog::operator = (const Dog& old)
{
	this->type = old.type;
	if (!_brain)
		_brain = new Brain();
	*_brain = *(old._brain);
	std::cout << "copy assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "The dog is running away.." << std::endl;
	delete(_brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wuff" << std::endl;
}

Brain*	Dog::getAdress(void) const
{
	return (this->_brain);
}