#include "Weapon.hpp"

Weapon::Weapon(std::string)
{
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType() const {
    return type;
}

// Setter for type
void Weapon::setType(const std::string& newType) {
    type = newType;
}