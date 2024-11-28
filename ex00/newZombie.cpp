#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie* broZombie = new Zombie(name);

	return (broZombie);
}
