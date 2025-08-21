/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:35:34 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/21 12:54:24 by isahmed          ###   ########.fr       */
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
		static bool	on_line(const Point p1, const Point p2, const Point p);
		static int	f(const Fixed &m, const Fixed &c , const Fixed &p);
		bool            operator==(const Point rhs) const;
};
