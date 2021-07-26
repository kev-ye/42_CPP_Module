/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:46:06 by kaye              #+#    #+#             */
/*   Updated: 2021/07/26 19:04:57 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {

	return ;
}

Zombie::~Zombie(void) {

	std::cout << this->_name << " -> delete" << std::endl;
	return ;
}

void Zombie::announce() {
	
	std::cout << '<' << this->_name << "> " \
		<< "BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string name) {
	
	this->_name = name;
}
