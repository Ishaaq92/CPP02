/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:10:11 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/19 15:30:16 by isahmed          ###   ########.fr       */
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
		Fixed			&operator=(const Fixed &right);
		float			toFloat( void ) const;
		int				toInt( void ) const;
	private:
		int					value_;
		static const int	fractional_ = 8;
};

std::ostream	&operator<<(std::ostream &out, Fixed &val);

#endif
