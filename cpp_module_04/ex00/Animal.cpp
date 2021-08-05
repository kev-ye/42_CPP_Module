/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 12:30:18 by kaye              #+#    #+#             */
/*   Updated: 2021/08/05 12:34:50 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "\e[1;35mAnimal\e[0m default constructor" << std::endl;
	return ;
}

Animal::Animal(Animal const & src) {
	std::cout << "\e[1;35mAnimal\e[0m assignment constructor" << std::endl;
	*this = src;
}

Animal::~Animal(void) {
	std::cout << "\e[1;35mAnimal\e[0m destructor" << std::endl;
	return ;
}

Animal & Animal::operator=(Animal const & rhs) {
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}