#include "Fixed.hpp"

Fixed::Fixed()
{
    cout << "Default constructor called" << endl;
    RawBits = 0;
}

Fixed::~Fixed()
{
    cout << "Destructor called" << endl;
}

Fixed::Fixed(const Fixed& fixed)
{
    cout << "Copy constructor called" << endl;
    RawBits = fixed.RawBits;
}

Fixed Fixed::operator=(Fixed &ref)
{
    cout << "Copy assignment operator called " << endl;
    RawBits = ref.RawBits;
    return (*this);
}

int Fixed::getRawBits(void) const
{
    cout << "getRawBits member function called" << endl;
    return (RawBits);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    RawBits = raw;
}
