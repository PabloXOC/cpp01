#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    Weapon sword("sword");
    Weapon axe("axe");

    HumanA john("John", sword);
    john.attack(); // John attacks with their sword

    HumanB doe("Doe");
    doe.attack(); // Doe has no weapon to attack with!

    doe.setWeapon(axe);
    doe.attack(); // Doe attacks with their axe

    return 0;
}
