#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : virtual public AMateria
{
	public:
		Ice(void);
		Ice(std::string const& type);
		Ice(const Ice& old);
		Ice& operator = (const Ice& old);
		~Ice(void);

		Ice* clone() const;
		void use(ICharacter& target);
};

#endif