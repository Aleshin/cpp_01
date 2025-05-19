#include "Weapon.hpp"

Weapon::Weapon() : type("default") {
	std::cout << "Weapon created with default type" << std::endl;
}
Weapon::Weapon(std::string type) : type(type) {
	std::cout << "Weapon created of type " << type << std::endl;
}
Weapon::~Weapon() {
	std::cout << "Weapon of type " << type << " destroyed" << std::endl;
}
void Weapon::setType(std::string type) {
	this->type = type;
	std::cout << "Weapon type set to " << type << std::endl;
}
std::string Weapon::getType() const {
	return type;
}
