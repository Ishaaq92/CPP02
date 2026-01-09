/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:10:11 by isahmed           #+#    #+#             */
/*   Updated: 2025/10/22 12:49:43 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <ostream>
# include <cmath>

class Fixed
{
	private:
		int					value_;
		static const int	fractional_ = 8;

	protected:

	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed &val);
		int 			getRawBits( void )const;
		void			setRawBits( int const raw );
		Fixed			&operator=(const Fixed &right);
		float			toFloat( void ) const;
		int				toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &val);

