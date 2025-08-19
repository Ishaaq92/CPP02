/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 12:51:53 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/19 18:21:59 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b;

	a = Fixed( 42.42f );
	b = Fixed( 42 );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;

	std::cout << "Logical operators" << std::endl;

	std::cout << (a > b) << std::endl;
	std::cout << (a < b) << std::endl;

	std::cout << (a > b) << std::endl;
	std::cout << (a < b) << std::endl;

	std::cout << (a >= b) << std::endl;
	std::cout << (a <= b) << std::endl;

	std::cout << (a != b) << std::endl;
	std::cout << (a == b) << std::endl;

	std::cout << "Arithmetic operators" << std::endl;

	std::cout << (a + b) << std::endl;
	std::cout << (a - b) << std::endl;
	std::cout << (a * b) << std::endl;
	std::cout << (a / b) << std::endl;
}
