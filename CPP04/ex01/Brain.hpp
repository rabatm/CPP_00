#include <string>
#include <iostream>
#include <string>

#pragma once

class Brain
{
private:
	/* data */
	std::string ideas[100];
public:
	Brain(/* args */);
	~Brain();
	Brain(Brain const &other);
	Brain &operator=(Brain const &other);	
};