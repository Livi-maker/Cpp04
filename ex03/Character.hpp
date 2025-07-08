#ifndef CHARACTER_HPP
# define CHARACTER_HPP


#include <iostream>
#include "AMateria.hpp"

class Character : virtual ICharacter
{
	public:
		Character(void);
		Character(std::string name);
		Character(Character const& old);
		Character& operator = (Character const& old);
		~Character(void);

		std::string const& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#include "ICharacter.hpp"
#endif