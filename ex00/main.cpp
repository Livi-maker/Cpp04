#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal	one;

	one.makeSound();
	std::cout << std::endl;

	Cat	cat;

	cat.makeSound();
	std::cout << std::endl;

	Dog dog;

	dog.makeSound();
	std::cout << dog.getType() << std::endl;
	std::cout << std::endl << "SUBJECT TESTS" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	delete(meta);
	delete(i);
	delete(j);
	return 0;
}
