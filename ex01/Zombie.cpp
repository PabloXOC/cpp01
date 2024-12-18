#include "Zombie.hpp"

//Constructor
Zombie::Zombie(std::string name) 
:name(name)
{}

Zombie::Zombie()
{}

Zombie::~Zombie() 
{
	std::cout << name << " is destroyed."
	<< std::endl;
}

void	Zombie::announce() const {
	std::cout << name << ": BraiiiiiiinnnzzzZ..."
	<< std::endl;
}

void	Zombie::setname(std::string name) {
	this->name = name;
}
