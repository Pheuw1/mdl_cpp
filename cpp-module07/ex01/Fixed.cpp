#include "Fixed.hpp"

Fixed::Fixed()
{
    RawBits = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& fixed)
{
    RawBits = fixed.RawBits;
}

Fixed &Fixed::operator=(const Fixed &ref)
{
    RawBits = ref.RawBits;
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (RawBits);
}

void Fixed::setRawBits(int const raw)
{
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

//https://medium.com/incredible-coder/converting-fixed-point-to-floating-point-format-and-vice-versa-6cbc0e32544e
//https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
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


// ----------------------------- ex02


bool Fixed::operator>(const Fixed &ref)
{
	return ((RawBits > ref.RawBits) ? true : false);
}

bool Fixed::operator<(const Fixed &ref)
{
	return ((RawBits < ref.RawBits) ? true : false);
}

bool Fixed::operator>=(const Fixed &ref)
{
	return ((RawBits >= ref.RawBits) ? true : false);
}

bool Fixed::operator<=(const Fixed &ref)
{
	return ((RawBits <= ref.RawBits) ? true : false);
}

bool Fixed::operator==(const Fixed &ref)
{
	return ((RawBits == ref.RawBits) ? true : false);
}

bool Fixed::operator!=(const Fixed &ref)
{
	return ((RawBits != ref.RawBits) ? true : false);
}

Fixed Fixed::operator+(const Fixed &ref)
{
	Fixed tmp(RawBits + ref.RawBits);
	return (tmp);
}

Fixed Fixed::operator-(const Fixed &ref)
{
	Fixed tmp(RawBits - ref.RawBits);
	return (tmp);
}

Fixed Fixed::operator*(const Fixed &ref)
{
	Fixed tmp(this->toFloat() * ref.toFloat());
	return (tmp);
}

Fixed Fixed::operator/(const Fixed &ref)
{
	Fixed tmp(RawBits / ref.RawBits);
	return (tmp);
}


Fixed Fixed::operator++()
{
	RawBits++;
	return (*this);
}

const Fixed Fixed::operator++(int)
{
	Fixed	tmp = *this;
	RawBits++;
	return (tmp);
}

Fixed Fixed::operator--()
{
	RawBits--;
	return (*this);
}

const Fixed Fixed::operator--(int)
{
	Fixed	tmp = *this;
	RawBits--;
	return (tmp);
}

Fixed Fixed::min(const Fixed &ref1, const Fixed &ref2)
{
	if (ref1.getRawBits() < ref2.getRawBits())
		return (ref1);
	else if (ref1.getRawBits() == ref2.getRawBits())
		return (ref1);
	else
		return (ref2);
}

Fixed Fixed::max(const Fixed &ref1, const Fixed &ref2)
{
	if (ref1.getRawBits() > ref2.getRawBits())
		return (ref1);
	else if (ref1.getRawBits() == ref2.getRawBits())
		return (ref1);
	else
		return (ref2);
}
