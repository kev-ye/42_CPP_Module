/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 17:56:48 by kaye              #+#    #+#             */
/*   Updated: 2021/07/31 19:01:27 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {
	return ;
}

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(0) {
	return ;
}

Point::Point(Point const & src) {
	*this = src;
}

Point::~Point(void) {
	return ;
}

Point & Point::operator=(Point const & rhs) {
	if (this != &rhs) {
		*this = rhs;
	}
	return *this;
}
