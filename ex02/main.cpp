#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "=== 抽象クラステスト ===" << std::endl;
    // AAnimal a; // これはコンパイルできない（= インスタンス化不可）

    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    j->makeSound();
    i->makeSound();

    delete j;
    delete i;

    std::cout << "=== 配列 delete テスト ===" << std::endl;
    const int num_animals = 4;
    AAnimal* animals[num_animals];

    for (int idx = 0; idx < num_animals; idx++)
    {
        if (idx % 2 == 0)
            animals[idx] = new Dog();
        else
            animals[idx] = new Cat();
    }
    for (int idx = 0; idx < num_animals; idx++)
        delete animals[idx];

    std::cout << "=== Copy/Assign テスト ===" << std::endl;
    Dog d1;
    Dog d2(d1);
    Dog d3;
    d3 = d2;

    Cat c1;
    Cat c2(c1);
    Cat c3;
    c3 = c2;

    return 0;
}
