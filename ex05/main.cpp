#include "Harl.hpp"
#include <iostream>

int main() {
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("UNKNOWN"); // test unknown level

    return 0;
}
