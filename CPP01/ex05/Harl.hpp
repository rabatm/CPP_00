#include <iostream>
#include <string>
#include <map>

#ifndef HARL_HPP
#define HARL_HPP

class Harl {
private:
    typedef void (Harl::*ComplainFunctionPtr)();
    std::map<std::string, ComplainFunctionPtr> _complainMap;

    void debug();
    void info();
    void warning();
    void error();

public:
    void complain(const std::string& level);
	Harl();
};


#endif