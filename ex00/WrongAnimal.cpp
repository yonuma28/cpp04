# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called !!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called !!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal copy instructor called !!" << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

std::string const& WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal makes a generic sound" << std::endl;
}
