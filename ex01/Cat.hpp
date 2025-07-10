#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : virtual public Animal
{
	public:
		Cat(void);
		Cat(const Cat& old);
		Cat& operator = (const Cat& old);
		~Cat(void);
		void	makeSound(void) const;
		Brain*	getAdress(void) const;

	private:
		Brain*	_brain;
};

#endif