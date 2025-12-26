#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "=== 配列テスト開始 ===" << std::endl;
    const int num_animals = 4;
    Animal* animals[num_animals];

    for (int i = 0; i < num_animals; i++) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "=== 破棄 ===" << std::endl;
    for (int i = 0; i < num_animals; i++) {
        delete animals[i];
    }

    std::cout << "\n=== Deep Copy テスト開始 ===" << std::endl;
    Dog basic;
    basic.setIdea(0, "DOG_BASIC_IDEA");
    {
        Dog tmp = basic;
        tmp.setIdea(0, "DOG_TMP_IDEA");
        std::cout << "Dog basic[0]=\"" << basic.getIdea(0) << "\" tmp[0]=\"" << tmp.getIdea(0) << "\"" << std::endl;
    }

    basic.makeSound();

	Cat c1;
	c1.setIdea(0, "CAT_C1_IDEA");
	Cat c2(c1);
	c2.setIdea(0, "CAT_C2_IDEA");
    std::cout << "Cat c1[0]=\"" << c1.getIdea(0) << "\" c2[0]=\"" << c2.getIdea(0) << "\"" << std::endl;

    std::cout << "\n=== 代入演算子テスト開始 ===" << std::endl;
    Dog a;
    Dog b;
    a = b;

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
