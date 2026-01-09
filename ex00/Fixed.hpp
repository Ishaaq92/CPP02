/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:10:11 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/18 14:41:03 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Fixed
{
	private:
		int					integer_;
		static const int	fractional_ = 8;

// protected:

	public:
		Fixed(void);
		Fixed(const Fixed &val);
		Fixed	&operator=(const Fixed &right);
		~Fixed(void);
		int 	getRawBits( void )const;
		void	setRawBits( int const raw );

};

