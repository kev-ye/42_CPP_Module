/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 12:47:23 by kaye              #+#    #+#             */
/*   Updated: 2021/08/07 14:41:23 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) :
	Animal("Cat"),
	_brain(new Brain()) {
	std::cout << "\e[1;34mCat\e[0m default constructor" << std::endl;
	return ;
}

Cat::Cat(Cat const & src) :
	Animal(src),
	_brain(new Brain(*(src._brain))) {
	std::cout << "\e[1;34mCat\e[0m assignment constructor" << std::endl;
	return ;
}

Cat::~Cat(void) {
	std::cout << "\e[1;34mCat\e[0m destructor" << std::endl;
	delete this->_brain;
	return ;
}

void	Cat::makeSound(void) const {
	std::cout << "Miaouh miaouh ..." << std::endl;
}

Brain	*Cat::getBrain(void) const {
	return this->_brain;
}

Cat & Cat::operator=(Cat const & rhs) {
	if (this != &rhs) {
		this->_type = rhs._type;
		this->_brain = new Brain(*(rhs._brain));
	}
	return *this;
}