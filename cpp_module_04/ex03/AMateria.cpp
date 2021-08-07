/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 19:24:34 by kaye              #+#    #+#             */
/*   Updated: 2021/08/07 19:40:53 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

AMateria::AMateria(void) {
	return ;
}

AMateria::AMateria(std::string const & type) : _type(type) {
	return ;
}

AMateria(AMateria const & src) {
	*this = src;
	return ;
}

AMateria::~AMateria(void) {
	return ;
}

std::string const &	getType() const {
	return this->_type;
}

AMateria &	AMateria::operator=(AMateria const & rhs) {
	if (this != &src) {
		this->_type = rhs._type;
	}
	return *this;
}