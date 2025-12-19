#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& copy);
        Cat& operator=(const Cat& other);
       virtual  ~Cat();

        /*
         * @brief 犬固有の鳴き声
        */
        void    makeSound() const;
};

# endif //CAT_H
