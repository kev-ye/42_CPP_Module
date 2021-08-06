/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 12:47:23 by kaye              #+#    #+#             */
/*   Updated: 2021/08/06 18:48:45 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) :
	Animal("Oog"),
	_brain(new Brain()) {
	std::cout << "\e[1;36mDog\e[0m default constructor" << std::endl;
	return ;
}

Dog::Dog(Dog const & src) :
	Animal(src),
	_brain(new Brain(*(src._brain))) {
	std::cout << "\e[1;36mDog\e[0m assignment constructor" << std::endl;
	return ;
}

Dog::~Dog(void) {
	std::cout << "\e[1;36mDog\e[0m destructor" << std::endl;
	delete this->_brain;
	return ;
}

void	Dog::makeSound(void) const {
	std::cout << "Wof wof ..." << std::endl;
}

Brain const	*Dog::getBrain(void) const {
	return this->_brain;
}

Dog & Dog::operator=(Dog const & rhs) {
	if (this != &rhs) {
		this->_type = rhs._type;
		this->_brain = new Brain(*(rhs._brain));
	}
	return *this;
}