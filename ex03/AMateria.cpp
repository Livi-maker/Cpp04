#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "Amateria default costructor called" << std::endl;
}

AMateria::AMateria(std::string const& type) : _type(type)
{
	std::cout << "Amateria costructor called" << std::endl;
}

AMateria::AMateria(const AMateria& old)
{
	*this = old;
	std::cout << "Amateria copy costructor called" << std::endl;
}

AMateria& AMateria::operator = (const AMateria& old)
{
	std::cout << "Amateria copy operator called" << std::endl;
	this->_type = old._type;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "Amateria destructor called" << std::endl;
}

std::string const& AMateria::getType() const
{
	return (this->_type);
}


