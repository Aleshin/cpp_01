#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* horde = new Zombie[N];
	if (!horde)
	{
		std::cerr << "Memory allocation failed" << std::endl;
		return NULL;
	}

    for (int i = 0; i < N; ++i)
    {
		std::stringstream ss;
		ss << i;
		horde[i].setName(name + ss.str());
    }

    return horde;
}