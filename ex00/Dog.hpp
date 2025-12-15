# ifndef DOG_H

# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& copy);
        Dog& operator=(const Dog& other);
        ~Dog();

        /*
         * @brief 犬固有の鳴き声
        */
        void    makeSound() const;
}

# endif