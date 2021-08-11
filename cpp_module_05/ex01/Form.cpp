/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 15:22:39 by kaye              #+#    #+#             */
/*   Updated: 2021/08/11 19:05:04 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :
	_name("Unknow"),
	_sign_grade(150),
	_exec_grade(150),
	_form_sign(false) {}

Form::Form(std::string const & name, int const sign_grade, int const exec_grade) :
	_name(name),
	_sign_grade(sign_grade),
	_exec_grade(exec_grade),
	_form_sign(false) {
	if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & src) :
	_name(src._name),
	_sign_grade(src._sign_grade),
	_exec_grade(src._exec_grade) {
	*this = src;
}

Form::~Form(void) {}

Form &	Form::operator=(Form const & rhs) {
	if (this == &rhs) return *this;

	std::string	*tmp_name = (std::string *)&this->_name;
	int			*tmp_sign_grade = (int *)&this->_sign_grade;
	int			*tmp_exec_grade = (int *)&this->_exec_grade;

	*tmp_name = rhs._name;
	*tmp_sign_grade = rhs._sign_grade;
	*tmp_exec_grade = rhs._exec_grade;
	this->_form_sign = rhs._form_sign;
	return *this;
}

std::ostream & operator<<(std::ostream & o, Form const & form) {
	o << "[\e[1;36m" << form.getName() << "\e[0m], Form sign grade [\e[1;36m" \
		<< form.getSignGrade() << "\e[0m] and Form exec grade [\e[1;36m" \
		<< form.getExecGrade() << "\e[0m], form is [\e[1;36m" \
		<< (form.getFormSign()? "signed" : "unsigned") << "\e[0m]." << std::endl;
	return o;
}

std::string const &	Form::getName(void) const { return this->_name; }
int const &			Form::getSignGrade(void) const { return this->_sign_grade; }
int const &			Form::getExecGrade(void) const { return this->_exec_grade; }
bool const &		Form::getFormSign(void) const { return this->_form_sign; }

void				Form::setFormSign(bool sign) { this->_form_sign = sign; }

void	Form::beSigned(Bureaucrat const & Bureaucrat) {
	if (this->getSignGrade() < Bureaucrat.getGrade())
		throw Form::GradeTooHighException();
	else
		this->setFormSign(true);
}

char const	*Form::GradeTooHighException::what() const throw() {
	return "\e[1;31mGrade Too High Exception!\e[0m";
}

char const	*Form::GradeTooLowException::what() const throw() {
	return "\e[1;31mGrade Too Low Exception!\e[0m";
}