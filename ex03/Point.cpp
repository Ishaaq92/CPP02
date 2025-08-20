/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:36:21 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/20 16:12:51 by isahmed          ###   ########.fr       */
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
	else
		m = Fixed(0);
	c = a.y - (m * a.x);
	if (((m * p.x) + c) > p.y)
		return (1);
	
}

Point   &Point::mid_point(const Point p1, const Point p2)
{
	Point   m(((p1.x + p2.x) / 2), ((p1.y + p2.y) / 2));

	return (m);
}

bool      Point::operator==(const Point rhs) const
{
	if (this->x == rhs.x && this->y == rhs.y)
		return (true);
	return (false);
}
