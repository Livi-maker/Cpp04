#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>
#include "Brain.hpp"

class Dog : virtual public Animal
{
	public:
		Dog(void);
		Dog(const Dog& old);
		Dog& operator = (const Dog& old);
		~Dog(void);
		void	makeSound(void) const;

	private:
		Brain* _idea;
};

#endif