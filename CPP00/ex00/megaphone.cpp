#include <algorithm>
#include <cctype>
#include <string>
#include <iostream>

struct to_upper {
    char operator()(char c) const { 
		return std::toupper(static_cast<unsigned char>(c));
	}
};

int main(int argc, char *argv[])
{
	std::string str = "";
	if (argc == 1)
		str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		str = argv[1];
	std::transform(str.begin(), str.end(), str.begin(), to_upper());
	std::cout << str << std::endl;
}