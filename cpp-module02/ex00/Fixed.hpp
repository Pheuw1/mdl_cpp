#ifndef FIXED_H
#define FIXED_H
#include <iostream>
using namespace std;

class Fixed{
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& fixed);
	Fixed operator=(Fixed &ref);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	
private:
	int RawBits;
	const static int bitNum = 8;
};

#endif