#include "Ice.hpp"

Ice::Ice(void) : AMateria()
{
	_type = "ice";
	std::cout << "Ice default costructor called" << std::endl;
}

Ice::Ice(const Ice& old) : AMateria(old)
{
	*this = old;
	std::cout << "Ice copy costructor called" << std::endl;
}

Ice& Ice::operator = (const Ice& old)
{
	std::cout << "Ice copy operator called" << std::endl;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice* Ice::clone() const
{
	Ice* newIce = new Ice();

	return (newIce);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
