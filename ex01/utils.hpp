/*
fichier qui contients toutes les fonctions communes au projet.
*/
#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>

std::string formatDisplay(std::string info);
void menuDisplay(std::string titleMenu, std::string* menuItem, int size);
void displayLine(int size);
std::string center(const std::string &text);

#endif