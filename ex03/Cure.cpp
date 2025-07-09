#include "Cure.hpp"

Cure::Cure(void): AMateria()
{
	_type = "cure";
	std::cout << "Cure default costructor called" << std::endl;
}

Cure::Cure(const Cure& old) : AMateria(old)
{
	*this = old;
	std::cout << "Cure copy costructor called" << std::endl;
}

Cure& Cure::operator = (const Cure& old)
{
	std::cout << "Cure copy operator called" << std::endl;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure* Cure::clone() const
{
	Cure* newCure = new Cure();

	return (newCure);
}

void Cure::use(ICharacter& target) const
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}