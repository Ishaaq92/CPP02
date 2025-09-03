/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 12:51:53 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/21 16:16:32 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point	a(0, 5);
	Point	b(0, 0);
	Point	c(5, 0);
	Point	p(0.1, 3);
	if (bsp(a, b, c, p))
		std::cout << "p lies in the triange" << std::endl;
	else
		std::cout << "P DOES NOT lie in the triange" << std::endl;
}
