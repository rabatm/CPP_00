#include "sed.hpp"

void readFileFindAndWrite(std::string fileName, std::string looking, std::string replacement) 
{
    std::string readString;
    std::string outputFileName = std::string(fileName + ".replace");
    std::ifstream file(fileName);
    std::ofstream outputFile(outputFileName);

    while (std::getline(file, readString)) {
        size_t pos = readString.find(looking);
        while (pos != std::string::npos) {
            readString = readString.substr(0, pos) + replacement + readString.substr(pos + looking.size());
            pos = readString.find(looking, pos + replacement.size());
        }
        outputFile << readString << std::endl;
    }

    file.close();
    outputFile.close();
}