#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>

void printError(std::string message);
bool fileExists(const std::string& filename);
void readFileFindAndWrite(std::string fileName, std::string looking, std::string replacement);

#endif