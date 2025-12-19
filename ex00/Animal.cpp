# include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal constructor called !!" << std::cout;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called !!" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
	std::cout << "Animal copy instructor called !!" << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

std::string const& Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const {
    std::cout << "Animal makes a generic sound" << std::endl;
}
