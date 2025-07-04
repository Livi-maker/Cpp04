#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
	std::cout << "ICharacter default costructor called" << std::endl;
}

ICharacter::ICharacter(std::string name) : _name(name)
{
	std::cout << "ICharacter costructor called" << std::endl;
}

ICharacter::ICharacter(ICharacter const& old)
{
	int i = 0;
	
	while (_slot[i])
		_slot[i] = NULL;
	*this = old;
	std::cout << "ICharacter copy costructor called" << std::endl;
}

ICharacter& ICharacter::operator = (ICharacter const& old)
{
	this->_name = old._name;
	std::cout << "ICharacter copy operator called" << std::endl;
}

ICharacter::~ICharacter(void)
{
	std::cout << "ICharacter destructor called" << std::endl;
}

std::string const& ICharacter::getName() const
{
	return (this->_name);
}

void ICharacter::equip(AMateria* m)
{
	int	i = 0;

	while (_slot[i])
		i++;
	if (i < 4)
		_slot[i] = m;
}

void ICharacter::unequip(int idx)
{
	if (idx < 4)
		_slot[idx] = NULL;
}

void ICharacter::use(int idx, ICharacter& target)
{
	if (_slot[idx])
		_slot[idx]->use(target);
}

