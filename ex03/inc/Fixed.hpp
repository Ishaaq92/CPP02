/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:10:11 by isahmed           #+#    #+#             */
/*   Updated: 2025/10/22 13:20:15 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <ostream>

class Fixed
{
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed &val);
		int 					getRawBits( void )const;
		void					setRawBits( int const raw );
		int						toInt( void ) const;
		float					toFloat( void ) const;
		static	Fixed			&min(Fixed &f1, Fixed &f2);
		static	Fixed			&max(Fixed &f1, Fixed &f2);
		static	const Fixed		&min(const Fixed &f1, const Fixed &f2);
		static	const Fixed		&max(const Fixed &f1, const Fixed &f2);

		Fixed					&operator=(const Fixed &right);

		bool					operator>(const Fixed &right) const;
		bool					operator<(const Fixed &right) const;
		bool					operator>=(const Fixed &right) const;
		bool					operator<=(const Fixed &right) const;
		bool					operator==(const Fixed &right) const;
		bool					operator!=(const Fixed &right) const;

		float					operator+(const Fixed &right) const;
		float					operator-(const Fixed &right) const;
		float					operator*(const Fixed &right) const;
		float					operator/(const Fixed &right) const;

		Fixed					&operator++();
		Fixed					&operator--();

		Fixed					operator++(int);
		Fixed					operator--(int);

	private:
		int					value_;
		static const int	fractional_ = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &val);

