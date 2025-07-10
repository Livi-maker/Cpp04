#include "AMateria.hpp"

AMateria::AMateria(void)
{}

AMateria::AMateria(const std::string& type) : _type(type)
{}

AMateria::AMateria(const AMateria& old)
{
	*this = old;
}

AMateria& AMateria::operator = (const AMateria& old)
{
	return (*this);
}

AMateria::~AMateria(void)
{}

std::string const& AMateria::getType() const
{
		return (this->_type);
}

void	AMateria::use(ICharacter& target) const
{
	(void) target;
}


