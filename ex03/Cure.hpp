#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		Cure(std::string const& type);
		Cure(const Cure& old);
		Cure& operator = (const Cure& old);
		~Cure(void);

		Cure* clone() const;
		void use(ICharacter& target) const;
};

#endif