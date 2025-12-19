#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "--- Array Test Start ---" << std::endl;
    const int num_animals = 4;
    Animal* animals[num_animals];

    for (int i = 0; i < num_animals; i++) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "--- Destruction Start ---" << std::endl;
    for (int i = 0; i < num_animals; i++) {
        delete animals[i];
    }

    std::cout << "\n--- Deep Copy Test Start ---" << std::endl;
    Dog basic;
    {
        Dog tmp = basic;
        std::cout << "Inner scope: tmp is about to be destroyed" << std::endl;
    }

    std::cout << "Outer scope: basic is still alive" << std::endl;
    basic.makeSound();

    std::cout << "\n--- Assignment Operator Test ---" << std::endl;
    Dog a;
    Dog b;
    a = b;

    return 0;
}
