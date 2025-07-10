#include "Cure.hpp"

Cure::Cure(void): AMateria()
{
	_type = "cure";
}

Cure::Cure(const Cure& old) : AMateria(old)
{
	*this = old;
}

Cure& Cure::operator = (const Cure& old)
{
	return (*this);
}

Cure::~Cure(void)
{}

Cure* Cure::clone() const
{
	Cure* newCure = new Cure();

	return (newCure);
}

void Cure::use(ICharacter& target) const
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}