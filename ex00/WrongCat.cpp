# include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat construcotr called !!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called !!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called !!" << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}


void	WrongCat::makeSound() const
{
	std::cout << "meaomeao!!" << std::endl;
}
