/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:46:06 by kaye              #+#    #+#             */
/*   Updated: 2021/07/26 14:52:37 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {

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