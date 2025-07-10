#include "Ice.hpp"

Ice::Ice(void) : AMateria()
{
	_type = "ice";
}

Ice::Ice(const Ice& old) : AMateria(old)
{
	*this = old;
}

Ice& Ice::operator = (const Ice& old)
{
	return (*this);
}

Ice::~Ice(void)
{}

Ice* Ice::clone() const
{
	Ice* newIce = new Ice();

	return (newIce);
}

void Ice::use(ICharacter& target) const
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
