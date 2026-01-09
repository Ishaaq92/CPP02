/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:35:34 by isahmed           #+#    #+#             */
/*   Updated: 2025/10/22 13:19:56 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Fixed.hpp"
# include <math.h>

class Point
{
	private:
		Fixed const x;
		Fixed const y;

	protected:

	public:
		Point(const float f1, const float f2);
		Point(const Point &p);
		Point();
		~Point();
		static Fixed 	sign(Point p1, Point p2, Point p3);
		static bool		on_line(const Point &a, const Point &b, const Point &c, const Point &p);
		static int		f(const Fixed &m, const Fixed &c , const Point &p);
		bool            operator==(const Point rhs) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

