#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class	AMateria
{
	public:
		AMateria(void);
		AMateria(std::string const& type);
		AMateria(const AMateria& old);
		AMateria& operator = (const AMateria& old);
		virtual ~AMateria(void);

		std::string const& getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) const;

	protected:
		std::string _type;
};


#endif