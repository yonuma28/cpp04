# include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
	std::cout << "AAnimal constructor called !!" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called !!" << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy)
{
	*this = copy;
	std::cout << "AAnimal copy instructor called !!" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

std::string const& AAnimal::getType() const
{
	return this->type;
}
