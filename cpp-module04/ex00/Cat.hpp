#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"
class Cat : public Animal
{
public:
    Cat();
    Cat(Cat &&) = default;
    Cat(const Cat &) = default;
    Cat &operator=(Cat &&) = default;
    Cat &operator=(const Cat &) = default;
    ~Cat();

private:
};
#endif // !CAT_H