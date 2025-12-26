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

		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;
};

# endif //CAT_H
