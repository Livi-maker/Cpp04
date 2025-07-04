#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class ICharacter
{
	public:
		ICharacter(void);
		ICharacter(std::string name);
		ICharacter(ICharacter const& old);
		ICharacter& operator = (ICharacter const& old);
		virtual ~ICharacter(void);

		virtual std::string const& getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

	private:
		std::string _name;
		AMateria*	_slot[4];
};

#endif