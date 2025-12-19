#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
    protected:
        /**
         * @brief 動物の種別を表す文字列。派生クラスからアクセス可能。
        */
        std::string type;

    public:
        Animal();
        Animal(const Animal& copy);
        Animal& operator=(const Animal& other);
        virtual ~Animal();

        /**
         * @brief 動物のtypeを取得
         * @return 動物の種別を表す定数参照 (std::string const &)。
        */
        std::string const& getType() const;
        
        /**
         * @brief 動物の鳴き声を出力
        */
        virtual void makeSound() const;
		// void	makeSound() const;
};

# endif //ANIMAL_H
