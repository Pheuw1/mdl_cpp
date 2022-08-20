#include "Harl.hpp"

void Harl::complain(std::string msg)
{
    (*code[msg])();

}
void Harl::init(void)
{
    code["DEBUG"] =   &debug;
    code["INFO"] =    &info;
    code["WARNING"] = &warning;
    code["ERROR"] =   &error;
}

Harl::Harl(void)
{
	init();
}

void Harl::allow_above_levels(string level)
{
    auto it = code.find(level);
    if (it != code.begin())
        code.erase(code.begin(), --it);
}

void Harl::print_all(void)
{
    //  for (auto &level : this->code)
    //     complain(level.first);
    complain("DEBUG");
    complain("INFO");
    complain("WARNING");
    complain("ERROR");
}

void Harl::debug(void)
{
	std::cout<<"debug : "  << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Harl::info(void)
{
	std::cout<<"info : "  << "I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "warning : " << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "error : " << "This is unacceptable, I want to speak to the manager now." << std::endl;

}
