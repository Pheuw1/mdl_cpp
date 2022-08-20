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

Fixed &Fixed::operator=(const Fixed &ref)
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

//----------------------------ex01---------------------------------//

template <typename T> void printBits(T num)
{
    bitset <64> a(num);
    cout << a << endl;
}

Fixed::Fixed(const int n) 
{
    RawBits = n << bitNum;
    RawBits |= n & (1 << 31);
}

Fixed::Fixed(const float f) 
{
    RawBits = f * (1 << bitNum);
}

float Fixed::toFloat(void) const
{
	return ((float)(this->RawBits / (float)(1 << bitNum)));
}

int Fixed::toInt(void) const
{
	return (RawBits >> bitNum);
}


std::ostream &operator<<(std::ostream &out, Fixed const &RawBits)
{
    out << RawBits.toFloat();
	return (out);
}
