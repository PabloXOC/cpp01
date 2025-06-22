#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	int	i;
	Zombie* Zombie_horde;

	if (N <= 0)
		return (NULL);
	Zombie_horde = new Zombie [N];
	i = 0;
	while (i < N)
	{
		Zombie_horde[i].setName(name);
		i++;
	}

	return (Zombie_horde);
}
