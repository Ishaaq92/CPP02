/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:51:42 by isahmed           #+#    #+#             */
/*   Updated: 2025/08/21 13:04:25 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    if (Point::on_line(a, b, point) && Point::on_line(b, c, point) && Point:: on_line(a, c, point))
        return (true);
    return (false);
}
