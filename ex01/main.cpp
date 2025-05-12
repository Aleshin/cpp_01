#include "Zombie.hpp"

int main(void)
{
	Zombie *Horde = zombieHorde(5, "Zombie");
	if (!Horde)
	{
		std::cerr << "Failed to create zombie horde" << std::endl;
		return (1);
	}
	// Announce each zombie in the horde
	for (int i = 0; i < 5; ++i)
	{
		Horde[i].announce();
	}
	delete[] Horde;
	return (0);
}