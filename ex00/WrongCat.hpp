#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>
# include <string>

class WrongCat : virtual public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat& old);
		WrongCat& operator = (const WrongCat& old);
		~WrongCat(void);
		void	makeSound(void) const;
};

#endif