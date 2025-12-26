# include "Dog.hpp"

# include <iostream>

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called !!!" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called !!!" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called !!!" << std::endl;
	this->brain = new Brain(*copy.brain);
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment operator called !!!" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		Brain* tmp = new Brain(*other.brain);
		delete this->brain;
		this->brain = tmp;
	}

	return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof Woof!" << std::endl;
}

void Dog::setIdea(int index, const std::string& idea)
{
	this->brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
	return this->brain->getIdea(index);
}
