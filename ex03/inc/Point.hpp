/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:35:34 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/21 14:54:19 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <math.h>

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
		static bool		on_line(const Point &a, const Point &b, const Point &c, const Point &p);
		static int		f(const Fixed &m, const Fixed &c , const Point &p);
		bool            operator==(const Point rhs) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif