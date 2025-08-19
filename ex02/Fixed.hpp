/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:10:11 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/19 18:53:41 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
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
		int 			getRawBits( void )const;
		void			setRawBits( int const raw );
		int				toInt( void ) const;
		float			toFloat( void ) const;

		Fixed			&operator=(const Fixed &right);

		bool			operator>(const Fixed &right);
		bool			operator<(const Fixed &right);
		bool			operator>=(const Fixed &right);
		bool			operator<=(const Fixed &right);
		bool			operator==(const Fixed &right);
		bool			operator!=(const Fixed &right);

		float			operator+(const Fixed &right);
		float			operator-(const Fixed &right);
		float			operator*(const Fixed &right);
		float			operator/(const Fixed &right);

		Fixed			operator++();
		Fixed			operator--();

		Fixed			operator++(int);
		Fixed			operator--(int);
	private:
		int					value_;
		static const int	fractional_ = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &val);

#endif
