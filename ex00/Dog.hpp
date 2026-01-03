#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& copy);
        Dog& operator=(const Dog& other);
        virtual ~Dog();

        /*
         * @brief 犬固有の鳴き声
        */
        virtual void    makeSound() const;
};

# endif //DOG_H
