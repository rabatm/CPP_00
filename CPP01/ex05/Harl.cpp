#include "Harl.hpp"

Harl::Harl() {
    complainMap_.insert(std::make_pair("DEBUG", &Harl::debug));
    complainMap_.insert(std::make_pair("INFO", &Harl::info));
    complainMap_.insert(std::make_pair("WARNING", &Harl::warning));
    complainMap_.insert(std::make_pair("ERROR", &Harl::error));
}
void Harl::debug()
{
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}
void Harl::info()
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void Harl::warning()
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}
void Harl::error() {
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(const std::string& level) {
    std::map<std::string, ComplainFunctionPtr>::iterator iter = _complainMap.find(level);

    if (iter != _complainMap.end()) {
        (this->*(iter->second))();
    } else {
        std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
}