#include <string>
#include <iostream>

int main(void)
{
	std::string 	myString =  "HI THIS IS BRAIN";
	std::string* 	stringPTR = &myString;
	std::string&	stringREF = myString;

    std::cout << "The memory address of the string variable : " << &myString << std::endl;
    std::cout << "The memory address held by stringPTR      : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF      : " << &stringREF << std::endl;

	std::cout << "The value of the string variable  : " << myString << std::endl;
	std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF : " << myString << std::endl;

	return 0;
}