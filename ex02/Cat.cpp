# include "Cat.hpp"

# include <iostream>

Cat::Cat() : AAnimal()
{
	std::cout << "Cat constructor called !!!" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called !!!" << std::endl;
}

Cat::Cat(const Cat& copy) : AAnimal(copy)
{
	std::cout << "Cat copy constructor called !!!" << std::endl;
	this->brain = new Brain(*copy.brain);
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		this->type = other.type;
		Brain* tmp = new Brain(*other.brain);
		delete this->brain;
		this->brain = tmp;
	}
	std::cout << "Cat copy assignment operator called !!!" << std::endl;

	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow Meow!" << std::endl;
}
