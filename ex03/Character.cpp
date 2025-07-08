#include "Character.hpp"

Character::Character(void) : ICharacter()
{
	std::cout << "Character default costructor called" << std::endl;
}

Character::Character(std::string name) : ICharacter()
{
	_name = name;
	std::cout << "Character costructor called" << std::endl;
}

Character::Character(Character const& old) : ICharacter(old)
{
	int i = 0;

	while (_slot[i])
		_slot[i] = NULL;
	*this = old;
	std::cout << "Character copy costructor called" << std::endl;
}

Character& Character::operator = (Character const& old)
{
	this->_name = old._name;
	std::cout << "Character copy operator called" << std::endl;
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
}

std::string const& Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	int	i = 0;

	while (_slot[i])
		i++;
	if (i < 4)
		_slot[i] = m;
}

void Character::unequip(int idx)
{
	if (idx < 4)
		_slot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (_slot[idx])
		_slot[idx]->use(target);
}