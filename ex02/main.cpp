#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

// 色を付けるためのマクロ（任意ですが、42の評価では非常に見やすくなります）
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"

int main()
{
    std::cout << YELLOW << "=== 1. 抽象クラス & 多態性テスト ===" << RESET << std::endl;
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    std::cout << "Type: " << j->getType() << " " << std::endl;
    std::cout << "Type: " << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();

    delete j;
    delete i;

    std::cout << std::endl << YELLOW << "=== 2. 配列の構築と一括削除 (ex01要件) ===" << RESET << std::endl;
    const int num_animals = 4;
    AAnimal* animals[num_animals];

    for (int k = 0; k < num_animals; k++) {
        std::cout << "\n[Create " << k << "]" << std::endl;
        if (k < num_animals / 2)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
    }

    std::cout << GREEN << "--- 鳴き声チェック ---" << RESET << std::endl;
    for (int k = 0; k < num_animals; k++)
        animals[k]->makeSound();

    std::cout << GREEN << "--- 一括削除チェック ---" << RESET << std::endl;
    for (int k = 0; k < num_animals; k++) {
        std::cout << "\n[Delete " << k << "]" << std::endl;
        delete animals[k];
    }

    std::cout << std::endl << YELLOW << "=== 3. 深いコピーの厳密なテスト (ex01最重要) ===" << RESET << std::endl;
    {
        std::cout << GREEN << "--- Dogのコピーテスト ---" << RESET << std::endl;
        Dog basic;
        {
            Dog tmp = basic;
        }
        std::cout << "\nコピー先の消滅後も、コピー元が健在かチェック" << std::endl;
        basic.makeSound(); 
    }

    return 0;
}
