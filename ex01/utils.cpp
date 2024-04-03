//fichier qui contients les fonction utile a tout le projet.
#include "./PhoneBook.class.hpp"

std::string formatDisplay(std::string info)
{
    std::string newString;

    if (info.length() >= 10)
        newString = info.substr(0,9) + "."; 
    else
        newString = info.insert(0, 10 - info.length(), ' ');
    return newString + "|";
}

std::string center(const std::string &text, int width)
{
    int len = text.length();
    if(width < len) { return text; }

    int diff = width - len;
    int pad1 = diff/2;
    int pad2 = diff - pad1;

    return "|" + std::string(pad1, ' ') + text + std::string(pad2, ' ');
}


std::string formatMenu(std::string info)
{
     return "|" + std::string(2, ' ') + info + std::string(44 - info.length(), ' ') + "|";
}

void menuDisplay(std::string titleMenu, std::string* menuItem, int size)
{
    std::cout << " ---------------------------------------------- " << std::endl;
    std::cout << center(titleMenu, 46) + "|" << std::endl;
    for(int i = 0; i < size; i++)
    {
        std::cout << formatMenu(menuItem[i]) << std::endl;
    }
    std::cout << " ---------------------------------------------- " << std::endl;
}

void displayLine(int size)
{
    std::cout << " ";
    while (size-- > 0 )
        std::cout << "-";
    std::cout << " " << std::endl;
}

void displayPause()
{

    std::cout << std::endl << "Press Enter to continue..." << std::endl;
    std::string temp;
    std::getline(std::cin, temp);
}

std::string toString(int myInt)
{
    std::stringstream ss;
	ss << myInt;

    return ss.str();
}

int stringToInt (std::string myString)
{
    std::stringstream ss(myString);
    int id;
    ss >> id;
    return id;
}