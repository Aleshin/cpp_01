#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie() {
	std::cout << "Noname zombie created" << std::endl;
}

Zombie::~Zombie() {
    std::cout << name << " is destroyed" << std::endl;
}

void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName (std::string name) { this->name = name; };

