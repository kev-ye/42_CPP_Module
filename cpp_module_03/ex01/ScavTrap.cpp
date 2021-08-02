/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 13:02:52 by kaye              #+#    #+#             */
/*   Updated: 2021/08/02 15:47:21 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "\e[1;36mScavTrap\e[0m default constructor" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	*this = src;
	return ;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "\e[1;36mScavTrap\e[0m destructor" << std::endl;
	return ;
}

ScavTrap	& ScavTrap::operator=(ScavTrap const & rhs) {
	return *this;
}
