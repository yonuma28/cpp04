#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "--- Array Test Start ---" << std::endl;
    const int num_animals = 10;
    Animal* animals[num_animals];

    for (int i = 0; i < num_animals; i++) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "-------------------------" << std::endl;
    for (int i = 0; i < num_animals; i++)
        animals[i]->makeSound();

    std::cout << "--- Destruction Start ---" << std::endl;
    for (int i = 0; i < num_animals; i++) {
        delete animals[i];
    }

std::cout << "===== Exercise 02: Deep Copy Verification =====" << std::endl;

    std::cout << "\n[1] Initializing original Dog..." << std::endl;
    Dog* original = new Dog();
    original->setBrainIdea(0, "Eat a bone");
    original->setBrainIdea(1, "Chasing a ball");

    std::cout << "\n[2] Creating a copy via copy constructor..." << std::endl;
    Dog* copy = new Dog(*original);

    std::cout << "\n[3] Memory Address Check:" << std::endl;
    std::cout << "Original Brain address: " << original->getBrain() << std::endl;
    std::cout << "Copy    Brain address: " << copy->getBrain() << std::endl;

    if (original->getBrain() == copy->getBrain()) {
        std::cout << ">>> ERROR: SHADOW COPY DETECTED! (Same address)" << std::endl;
    } else {
        std::cout << ">>> SUCCESS: DEEP COPY CONFIRMED! (Different addresses)" << std::endl;
    }

    std::cout << "\n[4] Independence Check (Modifying copy's idea)..." << std::endl;
    copy->setBrainIdea(0, "Sleep all day");

    std::cout << "Original Idea[0]: " << original->getBrainIdea(0) << std::endl;
    std::cout << "Copy     Idea[0]: " << copy->getBrainIdea(0) << std::endl;

    if (original->getBrainIdea(0) != copy->getBrainIdea(0)) {
        std::cout << ">>> SUCCESS: Original and Copy are independent!" << std::endl;
    } else {
        std::cout << ">>> ERROR: Original was affected by Copy's change!" << std::endl;
    }

    std::cout << "\n[5] Assignment Operator Test (with self-assignment)..." << std::endl;
    Dog assignment_test;
    assignment_test = *copy;
    assignment_test = assignment_test;
    std::cout << "Self-assignment completed safely." << std::endl;

    std::cout << "\n[6] Final Destruction (Check for double free or leaks)..." << std::endl;
    delete original;
    delete copy;

    std::cout << "\n===== Test Finished =====" << std::endl;
    return 0;
}
