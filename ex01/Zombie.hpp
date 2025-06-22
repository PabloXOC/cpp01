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
	Zombie();
	//Destructor
	~Zombie();
	
	//functions
	void announce() const;
	void setName(std::string name);
};


Zombie* zombieHorde( int N, std::string name );

#endif