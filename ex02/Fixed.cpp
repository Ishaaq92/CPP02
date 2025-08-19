/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:13:48 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/19 19:32:55 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <ostream>
#include <cmath>

Fixed::Fixed(void) : value_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &val)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = val;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value_);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value_ = raw;
}

Fixed	&Fixed::operator=(const Fixed &right)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value_ = right.getRawBits();
	return (*this);
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->value_ = (val << this->fractional_);
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->value_ = roundf((val  * (1 << this->fractional_)));
}

float	Fixed::toFloat( void ) const
{
	float	val;

	val = (this->value_ / (float) (1 << this->fractional_));
	return (val);
}

int		Fixed::toInt( void ) const
{
	return (this->value_ >> this->fractional_);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &val)
{
	out << val.toFloat();
	return (out);
}

bool	Fixed::operator>(const Fixed &right)
{
	if (this->toFloat() > right.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &right)
{
	if (this->toFloat() < right.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &right)
{
	if (this->toFloat() >= right.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &right)
{
	if (this->toFloat() <= right.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &right)
{
	if (this->toFloat() == right.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &right)
{
	if (this->toFloat() != right.toFloat())
		return (true);
	return (false);
}

float	Fixed::operator+(const Fixed &right)
{
	return ((float) this->toFloat() + right.toFloat());
}

float	Fixed::operator-(const Fixed &right)
{
	return (this->toFloat() - right.toFloat());
}

float	Fixed::operator*(const Fixed &right)
{
	return (this->toFloat() * right.toFloat());
}

float	Fixed::operator/(const Fixed &right)
{
	return (this->toFloat() / right.toFloat());
}

Fixed	Fixed::operator++()
{
	++this->value_;
	std::cout << "Preincrement ++" << std::endl;
	return (*this);
}

Fixed	Fixed::operator--()
{
	--this->value_;
	std::cout << "Predecrement --" << std::endl;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	val;

	val = *this;
	this->value_ = this->value_ + 1;
	std::cout << "Postincrement ++" << std::endl;
	return (val);
}

Fixed	Fixed::operator--(int)
{
	Fixed	val;

	val = *this;
	this->value_ = this->value_ - 1;
	std::cout << "Postdecrement --" << std::endl;
	return (val);
}
