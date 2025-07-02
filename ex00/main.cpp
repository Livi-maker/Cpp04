#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal	one;
	Animal	two;
	Animal	three(one);

	one = two;
	std::cout << std::endl;

	Cat	cat;

	cat.makeSound();
	std::cout << std::endl;

	Dog dog;

	dog.makeSound();
	std::cout << std::endl << "SUBJECT TESTS" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	delete(meta);
	delete(i);
	return 0;
}