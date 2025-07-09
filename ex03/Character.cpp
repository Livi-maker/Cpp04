#include "Character.hpp"

Character::Character(void)
{
	int	i;

	for (i = 0; i < 4; i++)
		_slot[i] = 0;
	std::cout << "Character default costructor called" << std::endl;
}

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_slot[i] = 0;
	std::cout << "Character costructor called" << std::endl;
}

Character::Character(Character const& old)
{
	*this = old;
	std::cout << "Character copy costructor called" << std::endl;
}

Character& Character::operator = (Character const& old)
{
	int i = 0;

	for (i = 0; i < 4; i++)
	{
		if (_slot[i])
			delete (_slot[i]);
		if (old._slot[i])
			_slot[i] = old._slot[i]->clone();
		else
			_slot[i] = 0;
	}

	this->_name = old._name;
	std::cout << "Character copy operator called" << std::endl;
	return (*this);
}

Character::~Character(void)
{
	int	i;

	for (i = 0; i < 4; i++)
		if (_slot[i])
			delete (_slot[i]);
	std::cout << "Character destructor called" << std::endl;
}

std::string const& Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	int	i;

	for (i = 0; i < 4; i++)
	{
		if (!_slot[i])
		{
			_slot[i] = m->clone();
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 4)
		_slot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && _slot[idx])
		_slot[idx]->use(target);
}