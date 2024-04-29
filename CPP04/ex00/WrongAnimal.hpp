#pragma once
#include <iostream>
#include <string>

class WrongAnimal
{
private:
	std::string _type;
public:
	WrongAnimal(/* args */);
	~WrongAnimal();
	WrongAnimal(WrongAnimal const &other);
	WrongAnimal &operator=(WrongAnimal const &other);
	
	std::string getType() const;
	void setType(std::string type);
	void makeSound() const;

};