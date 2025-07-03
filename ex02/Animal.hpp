#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal
{
	public:
		Animal(void);
		Animal(const Animal& old);
		Animal& operator = (const Animal& old);
		virtual ~Animal(void);
		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;

	protected:
		std::string	type;
};

#endif