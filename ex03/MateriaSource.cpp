#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default costructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& old) : IMateriaSource(old)
{
	*this = old;
	std::cout << "MateriaSource copy costructor called" << std::endl;
}

MateriaSource& MateriaSource::operator = (const MateriaSource& old)
{
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* to_copy) const
{}

AMateria* MateriaSource::createMateria(std::string const& type) const
{}