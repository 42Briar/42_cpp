#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	std::cout << "//----------------Constructor tests----------------//" << std::endl;
	{
		Animal test;
		Animal t2(test);
		Animal t3;

		t3 = t2;
	}

	std::cout << "\n//----------------Polymorphism tests----------------//" << std::endl;

	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	animal->MakeSound();
	dog->MakeSound();
	cat->MakeSound();

	delete cat;
	delete dog;
	delete animal;

	std::cout << "\n//----------------Faulty Polymorphism tests----------------//" << std::endl;

	const WrongAnimal *wronganimal = new WrongAnimal();
	const WrongAnimal *wrongcat = new WrongCat();

	wronganimal->MakeSound();
	wrongcat->MakeSound();

	delete wrongcat;
	delete wronganimal;

}