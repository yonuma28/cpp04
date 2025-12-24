#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
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
        void    makeSound() const;
        
        /*
         * @brief Brain のポインタを返す
        */
        const Brain*    getBrain() const;

        void setBrainIdea(int idx, std::string idea);
        std::string getBrainIdea(int idx) const;
};

# endif //DOG_H
