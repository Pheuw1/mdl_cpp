#include "Weapon.hpp"

const string& Weapon::getType(void)
{
    return this->type;
}

void Weapon::setType(std::string type) {
    this->type = type;
}

Weapon::Weapon(std::string type)
:type(type)
{}
