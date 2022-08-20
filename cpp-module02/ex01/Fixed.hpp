#ifndef FIXED_H
#define FIXED_H
#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

class Fixed{
public:
	Fixed();
	Fixed(const float);
	Fixed(const int);

	~Fixed();
	Fixed(const Fixed& fixed);
	Fixed &operator=(const Fixed &ref);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;

private:
	int RawBits;
	const static int bitNum = 8;
};
std::ostream &operator<<(std::ostream &out, Fixed const &value);


#endif