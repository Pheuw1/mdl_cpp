#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"
class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat &);
    Cat &operator=(Cat &&) = default;
    Cat &operator=(const Cat &) = default;
    ~Cat();

private:
    Brain *brain;
};
#endif // !CAT_H