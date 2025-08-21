/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:36:21 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/21 14:59:09 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(const float f1, const float f2) : x(f1), y(f2)
{
}

Point::Point(const Point &p) : x(p.x), y(p.y)
{
}

Point::Point() : x(0), y(0)
{
}

Point::~Point()
{
}

bool	Point::on_line(const Point &a, const Point &b, const Point &c, const Point &p)
{
	Fixed	m;
	Fixed	k;
	
	m = 0;
	if (a.x != b.x)
		m = Fixed((a.y - b.y) / (a.x - b.x));
	k = a.y - (m * a.x);
	if (f(m, k, p) == f(m, k, c) && f(m,k, p) != 2)
		return (true);
	return (false);
}

int	Point::f(const Fixed &m, const Fixed &c , const Point &p)
{
	Fixed	y_val;

	y_val = (p.x * m) + c.toFloat();
	if (roundf(p.y.toFloat()) < roundf(y_val.toFloat()))
		return (1);
	// if (p.y > y_val)
	// 	return (0);
	// std::cout << " -------------the same\n";
	return (0);
}

bool      Point::operator==(const Point rhs) const
{
	if (this->x == rhs.x && this->y == rhs.y)
		return (true);
	return (false);
}
