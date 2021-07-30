/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:53:00 by kaye              #+#    #+#             */
/*   Updated: 2021/07/30 18:02:32 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_bits = 8;

Fixed::Fixed(void) : _fixed(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return 	this->_fixed;
}

void	Fixed::setRawBits(int const raw) {
	this->_fixed = raw;
}

Fixed &	Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->setRawBits(rhs.getRawBits());
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & i) {
	o << i.getRawBits();
	return o;
}