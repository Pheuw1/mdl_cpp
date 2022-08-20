#ifndef WrongCat_H
#define WrongCat_H
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(WrongCat &&) = default;
    WrongCat(const WrongCat &) = default;
    WrongCat &operator=(WrongCat &&) = default;
    WrongCat &operator=(const WrongCat &) = default;
    ~WrongCat();

private:
};
#endif // !WrongCat_H