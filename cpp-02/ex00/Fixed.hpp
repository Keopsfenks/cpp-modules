//
// Created by sgurb on 30.01.2024.
//

#ifndef CPP_MODULES_FIXED_HPP
#define CPP_MODULES_FIXED_HPP

#include <iostream>

class Fixed {
 private:
	int value;
	static const int bits = 8;
 public:
	Fixed();
	Fixed(Fixed &copy);
	Fixed &operator=(const Fixed &copy);
	~Fixed();
	int getRawBits(void);
	void setRawBits(int const raw);
};


#endif //CPP_MODULES_FIXED_HPP
