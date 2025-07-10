#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <stdio.h>

int main()
{
	// int		i;
	// Animal*	array[6];

	// for (i = 0; i < 6; i++)
	// {
	// 	if (i < 6)
	// 		array[i] = new Cat();
	// 	else
	// 		array[i] = new Dog();
	// }
	// for (i = 0; i < 6; i ++)
	// 	delete (array[i]);

	Cat cat;
	Cat cat2(cat);
	std::cout << cat.getAdress() << std::endl;
	std::cout << cat2.getAdress() << std::endl;
	return 0;
}