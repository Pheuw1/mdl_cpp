#include "Harl.hpp"

void Harl::complain(std::string msg)
{
    (*code[msg])();
}

Harl::Harl(void)
{
    code["DEBUG"] =   &debug;
    code["INFO"] =    &info;
    code["WARNING"] = &warning;
    code["ERROR"] =   &error;
}

void Harl::print_above_levels(string level)
{
    if (level == "DEBUG" || level == "INFO" || level == "WARNING" || level == "ERROR") {
        switch(level[0])    {
            case('D'):
                this->complain("DEBUG");
            case('I'):
                this->complain("INFO");
            case('W'):
                this->complain("WARNING");
            case('E'):
                this->complain("ERROR");
        }
    }
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
