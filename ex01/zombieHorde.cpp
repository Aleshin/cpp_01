#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    void* memory = ::operator new(N * sizeof(Zombie));
    Zombie* horde = reinterpret_cast<Zombie*>(memory);

    for (int i = 0; i < N; ++i)
    {
        new (&horde[i]) Zombie(name + std::to_string(i));
    }

    return horde;
}