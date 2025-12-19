# include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat construcotr called !!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called !!" << std::endl;
}

Cat::Cat(const Cat& copy)
{
	*this = copy;
	std::cout << "Cat copy constructor called !!" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}


void	Cat::makeSound() const
{
	std::cout << "meaomeao!!" << std::endl;
}
