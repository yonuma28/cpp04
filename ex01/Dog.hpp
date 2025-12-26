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

		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;
};

# endif //DOG_H
