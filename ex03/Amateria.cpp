# include "Amateria.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{
    std::cout << "AMateria constructor called !!!" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "Amateria destructor called !!!" << std::endl;
}

std::string const & AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}

