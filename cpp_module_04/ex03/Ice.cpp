/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:33:37 by kaye              #+#    #+#             */
/*   Updated: 2021/08/08 16:11:55 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(Ice const & src) : AMateria(src) {}

Ice::~Ice(void) {}

AMateria	*Ice::clone(void) const { return new Ice(); }

void		Ice::use(ICharacter & target) {
	std::cout << "\e[1;31m* Shoots an ice at " << target.getName()
		<< " *\e[0m" << std::endl;
}

Ice &	Ice::operator=(Ice const & rhs) {
	if (this != &rhs)
		AMateria::operator=(rhs);
	return *this;
}