#ifndef DOG_H
# define DOG_H

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:
    Brain* brain;

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
