#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
    std::cout << "=== [1] 多態性（ポリモーフィズム）による配列テスト ===" << std::endl;
    const int num_animals = 4;
    Animal* animals[num_animals];

    for (int i = 0; i < num_animals; i++) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < num_animals; i++) {
        delete animals[i];
    }

    std::cout << "\n=== [2] 深いコピー（Deep Copy）のテスト: コピーコンストラクタ ===" << std::endl;
    Dog* original = new Dog();
    original->setIdea(0, "オリジナルのアイデア");

    Dog* copy = new Dog(*original);
    
    std::cout << "Original[0]: " << original->getIdea(0) << std::endl;
    std::cout << "Copy[0]:     " << copy->getIdea(0) << std::endl;

    copy->setIdea(0, "書き換えられたコピーのアイデア");
    std::cout << "\n--- コピーの値を変更した後の確認 ---" << std::endl;
    if (original->getIdea(0) != copy->getIdea(0)) {
        std::cout << ">>> 成功: オブジェクトは独立しています (Deep Copy)!" << std::endl;
    } else {
        std::cout << ">>> 失敗: オリジナルの値が書き換わっています (Shallow Copy)!" << std::endl;
    }

    std::cout << "\n=== [3] 代入演算子および自己代入のテスト ===" << std::endl;
    Dog assign_test_a;
    assign_test_a.setIdea(0, "アイデア A");
    
    {
        Dog assign_test_b;
        assign_test_b = assign_test_a;
        assign_test_b.setIdea(0, "修正されたアイデア B");
    }
    std::cout << "assign_test_a[0] の生存確認: " << assign_test_a.getIdea(0) << std::endl;

    std::cout << "\n--- 自己代入のチェック ---" << std::endl;
    Dog *ptr_to_a = &assign_test_a;
    assign_test_a = *ptr_to_a;
    std::cout << "自己代入が安全に完了しました。" << std::endl;

    std::cout << "\n=== [4] 最終クリーンアップ ===" << std::endl;
    delete original;
    delete copy;

    std::cout << "\n===== テスト終了 =====" << std::endl;
    return 0;
}
