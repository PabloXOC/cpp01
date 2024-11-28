#ifndef HUMANB_HPP

# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon* weapon; // Reference to a Weapon

public:
	HumanB(const std::string& name);
	~HumanB();

	void setWeapon(Weapon &newWeapon);
	void attack() const;
};



#endif