# include "Brain.hpp"

# include <iostream>

Brain::Brain()
{
	std::cout << "Brain constructor called !!!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called !!!" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain copy constructor called !!!" << std::endl;
	*this = copy;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain copy assignment operator called !!!" << std::endl;
	if (this != &other)
	{
		for(int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

void Brain::setIdea(int index, const std::string& idea)
{
	if (index < 0 || index >= 100)
		return;
	this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
		return std::string();
	return this->ideas[index];
}
