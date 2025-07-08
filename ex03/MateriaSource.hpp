#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& old);
		MateriaSource& operator = (const MateriaSource& old);
		~MateriaSource() {}
		void learnMateria(AMateria* to_copy) const;
		AMateria* createMateria(std::string const & type) const;
};

#endif