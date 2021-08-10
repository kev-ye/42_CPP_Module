/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:54:17 by kaye              #+#    #+#             */
/*   Updated: 2021/08/10 15:58:20 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Unknow"), _note(150) {}

Bureaucrat::Bureaucrat(std::string const & name, int const note) : _name(name) {
	if (note < 1)
		this->GradeTooHighException();
	else if (note > 150)
		this->GradeTooLowException();
	else
		this->_note = note;
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat(Bureaucrat const & src) { *this = src; }

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
	std::string *tmp_name = (std::string *)&this->_name;

	if (this != &rhs) {
		*tmp_name = rhs._name;
		this->_note = rhs._note;
	}
	return *this;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i) {
	o << i.getName() << ", bureaucrat grade "
		<< i.getGrade() << ".";
	return o;
}

void	Bureaucrat::GradeTooHighException(void) const {
	throw std::exception();
}

void	Bureaucrat::GradeTooLowException(void) const {
	throw std::exception();
}

std::string const & Bureaucrat::getName(void) const { return this->_name; }

int const & 		Bureaucrat::getGrade(void) const { return this->_note; }

void	Bureaucrat::incGrade(void) {
	int tmp = this->_note;

	if (--tmp < 1)
		this->GradeTooHighException();
	else
		this->_note = tmp;;
}

void	Bureaucrat::decGrade(void) {
	int tmp = this->_note;

	if (++tmp < 1)
		this->GradeTooLowException();
	else
		this->_note = tmp;
}