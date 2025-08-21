/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 12:51:53 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/21 13:18:05 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point	a(0, 5);
	Point	b(0, 0);
	Point	c(4, 0);
	Point	p(1, 1);
	if (bsp(a, b, c, p))
		std::cout << "p lies in the triange" << std::endl;
	else
		std::cout << "p DOES NOT lie in the triange" << std::endl;
}
