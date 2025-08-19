/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:13:48 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/19 15:47:05 by isahmed          ###   ########.fr       */
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
	this->value_ = val << this->fractional_;
}

float	Fixed::toFloat( void ) const
{
	float	val;

	val = (float) (this->value_ >> this->fractional_);
	return (val);
}

int		Fixed::toInt( void ) const
{
	return (this->value_ >> this->fractional_);
}

std::ostream	&operator<<(std::ostream &out, Fixed &val)
{
	out << val.toFloat();
	return (out);
}
