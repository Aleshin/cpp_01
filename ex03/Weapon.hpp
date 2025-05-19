#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon {
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	void setType(std::string type);
	std::string getType() const;
private:
	std::string type;
};

#endif // WEAPON_HPP