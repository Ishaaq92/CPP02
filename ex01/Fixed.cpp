/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:13:48 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/19 15:16:25 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <ostream>
#include <cmath>

Fixed::Fixed(void) : integer_(0)
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
	return (this->integer_);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->integer_ = raw;
}

Fixed	&Fixed::operator=(const Fixed &right)
{
	
	std::cout << "Copy assignment operator called" << std::endl;
	this->integer_ = right.getRawBits();
	return (*this);
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->integer_ = val;
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->integer_ = (int) val;
}

float	Fixed::toFloat( void ) const
{
	float	val;
	
	val = (float) this->integer_;
	return (val);
}

int		Fixed::toInt( void ) const
{
	int	val;

	val = this->integer_;
	return (val);
}

std::ostream	&operator<<(std::ostream &out, Fixed &val)
{
	out << val.toFloat();
	return (out);
}
