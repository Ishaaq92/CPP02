/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:36:21 by isahmed           #+#    #+#             */
/*   Updated: 2025/10/22 14:40:40 by isahmed          ###   ########.fr       */
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

Fixed 	Point::sign(Point p1, Point p2, Point p3)
{
	return ((p1.x - p3.x) * (p2.y - p3.y) - (p2.x - p3.x) * (p1.y - p3.y));
}
