/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 12:51:53 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/19 17:49:12 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed   a;
	Fixed const	b( 10 );
	Fixed const	c( 42.42f );
	Fixed const	d( b );

	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as an integer" << std::endl;
	std::cout << "b is "<< b.toInt() << " as an integer" << std::endl;
	std::cout << "c is "<< c.toInt() << " as an integer" << std::endl;
	std::cout << "d is "<< d.toInt() << " as an integer" << std::endl;
}
