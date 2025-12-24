#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
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
        void    makeSound() const;

        /*
         * @brief Brain のポインタを返す
        */
        const Brain*    getBrain() const;

        void setBrainIdea(int idx, std::string idea);
        std::string getBrainIdea(int idx) const;
};

# endif //CAT_H
