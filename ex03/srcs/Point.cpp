/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:36:21 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/21 13:14:57 by isahmed          ###   ########.fr       */
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

bool	Point::on_line(const Point a, const Point b, const Point p)
{
	Fixed	m;
	Fixed	c;
	
	m = 0;
	if (a.x != b.x)
		m = Fixed((a.y - b.y) / (a.x - b.x));
	c = a.y - (m * a.x);
	if (f(m, c, p.x) == f(m, c, c))
		return (true);
	return (false);
}

int	Point::f(const Fixed &m, const Fixed &c , const Fixed &p)
{
	Fixed	y_val;

	y_val = (p * m) + c.toFloat();
	if (p < y_val)
		return (true);
	return (false);
}

bool      Point::operator==(const Point rhs) const
{
	if (this->x == rhs.x && this->y == rhs.y)
		return (true);
	return (false);
}
