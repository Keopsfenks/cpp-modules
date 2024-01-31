//
// Created by sgurb on 30.01.2024.
//

#include "Fixed.hpp"
#include "../ex02/Fixed.hpp"


Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	this->value = copy.value;
}

Fixed &Fixed::operator=(const Fixed &copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = copy.value;
	return (*this);
}

Fixed::Fixed(const int num) {
	std::cout << "Int constructor called" << std::endl;
	this->value = num;
}

Fixed::Fixed(const float num) { /*Scaled and rounded int value*/
	std::cout << "Float constructor called" << std::endl;
	int	scaleFactor = pow(2, this->bits);
	this->value = static_cast<int>(roundf(num * scaleFactor));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

std::ostream &operator<<(std::ostream &output, const Fixed &fixed) {
	output << fixed.toFloat();
	return (output);
}

float Fixed::toFloat() const {
	int		scaleFactor = pow(2, this->bits);
	float	num = static_cast<float>(this->value) / scaleFactor;
	return	num;
}

int Fixed::toInt() const {
	return (this->value >> this->bits);
}