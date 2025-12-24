#ifndef CAT_H
# define CAT_H

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	private:
    Brain* brain;

    public:
        Cat();
        Cat(const Cat& copy);
        Cat& operator=(const Cat& other);
        virtual ~Cat();

        /*
         * @brief 猫固有の鳴き声
        */
        virtual void    makeSound() const;
};

# endif //CAT_H
