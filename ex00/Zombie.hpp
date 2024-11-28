#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
class Zombie {
private:
	std::string name;
public:
	//Constructors
	Zombie(std::string name);
	//Destructor
	~Zombie();
	
	//functions
	void announce() const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif