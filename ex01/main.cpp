#include "Zombie.hpp"

int main()
{
	int N;
	Zombie* horde;
	int	i;

	N = -3;
	horde = zombieHorde(N, "Zombie");
	if (horde == NULL)
	{
		std::cout << "Failed to create a Zombie horde!" << std::endl;
		return (1);
	}
	i = 0;
	while (i < N)
		horde[i++].announce();

	delete[] horde;
	return (0);
}
