#ifndef CHARACTER_HPP
# define CHARACTER_HPP


#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

class ICharacter;

class Character : public ICharacter
{
	public:
		Character(void);
		Character(const std::string &name);
		Character(Character const& old);
		Character& operator = (Character const& old);
		~Character(void);

		std::string const& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string _name;
		 AMateria*	_slot[4];
};

#endif