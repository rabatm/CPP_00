#include "sed.hpp"

void printError(std::string message)
{
	std::cerr << "\033[31m" << message << "\033[0m" << std::endl;
}

bool fileExists(const std::string& filename)
{
	std::ifstream file(filename.c_str());
	bool testFile = file.good();
	file.close();
	return testFile;
}