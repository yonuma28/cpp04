#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>
# include <string>

class WrongAnimal
{
    protected:
        /**
         * @brief 動物の種別を表す文字列。派生クラスからアクセス可能。
        */
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& copy);
        WrongAnimal& operator=(const WrongAnimal& other);
        virtual ~WrongAnimal();

        /**
         * @brief 動物のtypeを取得
         * @return 動物の種別を表す定数参照 (std::string const &)。
        */
        std::string const& getType() const;
        
        /**
         * @brief 動物の鳴き声を出力
        */
        void makeSound() const;
};

#endif //WRONGANIMAL_H
