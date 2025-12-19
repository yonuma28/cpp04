#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat& copy);
        WrongCat& operator=(const WrongCat& other);
        ~WrongCat();

        /*
         * @brief 犬固有の鳴き声
        */
        void    makeSound() const;
};

# endif //WRONGCAT_H
