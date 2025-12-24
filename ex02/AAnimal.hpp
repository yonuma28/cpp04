#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <iostream>
# include <string>

class AAnimal
{
    protected:
        /**
         * @brief 動物の種別を表す文字列。派生クラスからアクセス可能。
        */
        std::string type;

    public:
        AAnimal();
        AAnimal(const AAnimal& copy);
        AAnimal& operator=(const AAnimal& other);
        virtual ~AAnimal();

        /**
         * @brief 動物のtypeを取得
         * @return 動物の種別を表す定数参照 (std::string const &)。
        */
        std::string const& getType() const;
        
        /**
         * @brief 動物の鳴き声を出力
        */
        virtual void makeSound() const = 0;
		// void	makeSound() const;
};

# endif //AAnimal_H
