#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie {
public:
	Zombie(std::string name);
	~Zombie();
	void announce(void) const;
private:
	std::string name;
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif // ZOMBIE_HPP
