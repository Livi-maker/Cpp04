#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& old);
		MateriaSource& operator = (const MateriaSource& old);
		~MateriaSource();
		void learnMateria(AMateria* to_copy);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria* inventary[4];
};

#endif