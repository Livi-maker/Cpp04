#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class	WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& old);
		WrongAnimal& operator = (const WrongAnimal& old);
		virtual ~WrongAnimal(void);
		std::string		getType(void) const;
		virtual void	makeSound(void) const;

	protected:
		std::string	type;
};

#endif