/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:51:42 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/21 16:14:32 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed d1, d2, d3;
    bool has_neg, has_pos;

    d1 = Point::sign(point, a, b);
    d2 = Point::sign(point, b, c);
    d3 = Point::sign(point, c, a);

    if (d1 == 0 || d2 == 0 || d3 == 0)
        return false;

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    // If the signs are mixed (some positive, some negative), the point is outside.
    // If all signs are the same, the point is inside.
    return !(has_neg && has_pos);
}
