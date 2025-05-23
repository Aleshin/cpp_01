#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <sstream>

class Zombie {
public:
	Zombie();
	~Zombie();
	void announce(void) const;
	void setName(std::string name);
private:
	std::string name;
};
Zombie* zombieHorde( int N, std::string name );
#endif // ZOMBIE_HPP
