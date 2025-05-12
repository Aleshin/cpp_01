#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* horde = new Zombie[N];
	if (!horde)
	{
		std::cerr << "Memory allocation failed" << std::endl;
		return nullptr;
	}

    for (int i = 0; i < N; ++i)
    {
		horde[i].setName(name + std::to_string(i));
    }

    return horde;
}