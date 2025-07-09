#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	int	i;

	for (i = 0; i < 4; i++)
		inventary[i] = 0;
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
	for (int i = 0; i < 4; i++)
		if (inventary[i])
			delete inventary[i];
	std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* to_copy)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (!inventary[i])
		{
			inventary[i] = to_copy->clone();
			delete(to_copy);
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventary[i]->getType() == type)
			return (this->inventary[i]->clone());
	}
	return (0);
}