/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:35:34 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/20 16:04:23 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point(const float f1, const float f2);
		Point(const Point &p);
		Point();
		~Point();
		bool	Point::on_line(const Point p1, const Point p2, const Point p);
		static Point   &mid_point(const Point p1, const Point p2);
		bool            operator==(const Point rhs) const;
};
