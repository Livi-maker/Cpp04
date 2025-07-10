#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	int	i;

	for (i = 0; i < 4; i++)
		inventary[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& old) : IMateriaSource(old)
{
	*this = old;
}

MateriaSource& MateriaSource::operator = (const MateriaSource& old)
{
	int	i;

	for (i = 0; i < 4; i++)
	{
		if (old.inventary[i])
			this->inventary[i] = old.inventary[i]->clone();
		else
			this->inventary[i] = 0;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (inventary[i])
			delete inventary[i];
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
			return ;
		}
	}
	if (to_copy)
		delete to_copy;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventary[i] && this->inventary[i]->getType() == type)
			return (this->inventary[i]->clone());
	}
	return (0);
}