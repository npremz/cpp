/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:25:26 by npremont          #+#    #+#             */
/*   Updated: 2024/08/27 14:00:55 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void) : value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int int_value)
{
	//std::cout << "Int constructor called" << std::endl;
	value = int_value << FRACTION;
}

Fixed::Fixed(const float float_value)
{
	//std::cout << "Float constructor called" << std::endl;
	value = (int)roundf(float_value * (1 << FRACTION));
}

Fixed::Fixed(const Fixed &other)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		value = other.value;
	}
	return *this;
}

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int		Fixed::toInt(void) const
{
	return (value >> FRACTION);
}

float	Fixed::toFloat(void) const
{
	return ((float)(value / (float)(1 << FRACTION)));
}

bool	Fixed::operator>(Fixed const &other) const
{
	return (getRawBits() > other.getRawBits());
}

bool	Fixed::operator<(Fixed const &other) const
{
	return (getRawBits() < other.getRawBits());
}

bool	Fixed::operator>=(Fixed const &other) const
{
	return (getRawBits() >= other.getRawBits());
}

bool	Fixed::operator<=(Fixed const &other) const
{
	return (getRawBits() <= other.getRawBits());
}

bool	Fixed::operator==(Fixed const &other) const
{
	return (getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=(Fixed const &other) const
{
	return (getRawBits() != other.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &other) const
{
	return (this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(Fixed const &other) const
{
	return (this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(Fixed const &other) const
{
	return (this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(Fixed const &other) const
{
	return (this->toFloat() / other.toFloat());
}

Fixed&	Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed&	Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	++this->value;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	--this->value;
	return (tmp);
}

std::ostream& operator<<(std::ostream &o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return o;
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() < a.toFloat())
		return (a);
	else
		return (b);
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() > a.toFloat())
		return (a);
	else
		return (b);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() < a.toFloat())
		return (a);
	else
		return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() < a.toFloat())
		return (a);
	else
		return (b);
}
