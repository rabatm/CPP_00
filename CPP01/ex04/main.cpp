#include "sed.hpp"
//exercie 4 du CPP, le but et de remplacer la commande linux sed.

int main(int argc, char const *argv[])
{
	
	if (argc != 4) 
	{
        printError(std::string("Usage: ") + argv[0] + " <filename> <looking> <replace>");
        return 1;
    }
	if (!fileExists(argv[1]))
	{
		printError(std::string("Unable to open file ") + argv[1] + " ");
        return 1;
	}
	readFileFindAndWrite(argv[1], argv[2], argv[3]);
	return 0;
}
