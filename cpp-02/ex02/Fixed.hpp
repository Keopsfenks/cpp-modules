//
// Created by sgurb on 30.01.2024.
//

#ifndef CPP_MODULES_FIXED_HPP
#define CPP_MODULES_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
 private:
	int value;
	static const int bits = 8;
 public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed &operator=(const Fixed &copy);
	Fixed(const int num);
	Fixed(const float num);
	float toFloat( void ) const;
	int toInt( void ) const;
	~Fixed();
	void setRawBits(int const raw);
	int getRawBits() const;
	Fixed &operator+(const Fixed &copy);
	Fixed &operator-(const Fixed &copy);
	Fixed &operator*(const Fixed &copy);
	Fixed &operator/(const Fixed &copy);
	bool operator>(const Fixed &copy);
	bool operator>=(const Fixed &copy);
	bool operator<(const Fixed &copy);
	bool operator<=(const Fixed &copy);
	bool operator==(const Fixed &copy);
	bool operator!=(const Fixed &copy);
	Fixed &operator++(void);
	Fixed operator++(int);
	Fixed &operator--(void);
	Fixed operator--(int);
	static Fixed &min(Fixed &ref1, Fixed &ref2);
	static const Fixed &min(const Fixed &ref1, const Fixed &ref2);
	static Fixed &max(Fixed &ref1, Fixed &ref2);
	static const Fixed &max(const Fixed &ref1, const Fixed &ref2);
};

std::ostream &operator << (std::ostream &output, const Fixed &fixed);

#endif //CPP_MODULES_FIXED_HPP
