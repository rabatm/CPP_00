/*
fichier qui contients toutes les fonctions communes au projet.
*/
#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>

std::string formatDisplay(std::string info);
std::string center(const std::string &text, int width);
std::string toString(int myInt);
int 		stringToInt (std::string myString);
void 		menuDisplay(std::string titleMenu, std::string* menuItem, int size);
void 		displayLine(int size);
void 		displayPause();


#endif