/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:51:42 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/21 14:45:19 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    if (a == b && b == c && c == a)
        return (std::cout << "Points a, b and c must be distinct" << std::endl, false);
    if (point == a || point == b || point == c)
        return (false);

    if (Point::on_line(a, b, c, point) && Point::on_line(b, c, a, point) && Point:: on_line(a, c, b, point))
        return (true);
    return (false);
}
