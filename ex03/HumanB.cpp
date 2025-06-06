#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {
	std::cout << "HumanB " << name << " created" << std::endl;
}
HumanB::~HumanB() {
	std::cout << "HumanB " << name << " destroyed" << std::endl;
}
void HumanB::attack() const {
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon to attack" << std::endl;
}
void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
	std::cout << name << " has set their weapon to " << weapon.getType() << std::endl;
}
