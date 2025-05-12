#include "Zombie.hpp"

int main(void)
{
	Zombie *zombieHeap = newZombie("Zombie on heap");
	zombieHeap->announce();
	delete zombieHeap;
	randomChump("Zombie on stack");
	return (0);
}