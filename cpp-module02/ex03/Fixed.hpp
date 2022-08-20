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

	bool operator>(const Fixed &ref);
	bool operator<(const Fixed &ref);
	bool operator>=(const Fixed &ref);
	bool operator<=(const Fixed &ref);
	bool operator==(const Fixed &ref);
	bool operator!=(const Fixed &ref);

	Fixed operator++();
	const Fixed operator++(int);
	Fixed operator--();
	const Fixed operator--(int);

	Fixed operator+(const Fixed &ref);
	Fixed operator-(const Fixed &ref);
	Fixed operator*(const Fixed &ref);
	Fixed operator/(const Fixed &ref);
	
	static Fixed min(const Fixed &ref1, const Fixed &ref2);
	static Fixed max(const Fixed &ref1, const Fixed &ref2);

private:
	int RawBits;
	const static int bitNum = 8;
};
std::ostream &operator<<(std::ostream &out, Fixed const &value);


#endif