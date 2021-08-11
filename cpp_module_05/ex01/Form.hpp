/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 15:22:41 by kaye              #+#    #+#             */
/*   Updated: 2021/08/11 19:01:25 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form {
	public:
		Form(void);
		Form(std::string const & name, int const sign_grade, int const exec_grade);
		Form(Form const & src);
		~Form(void);

		Form &	operator=(Form const & rhs);

	public:
		std::string const &	getName(void) const;
		int const &			getSignGrade(void) const;
		int const &			getExecGrade(void) const;
		bool const &		getFormSign(void) const;

		void				setFormSign(bool sign);

		void	beSigned(Bureaucrat const & Bureaucrat);
		

	private:
		std::string const	_name;
		int const			_sign_grade;
		int const			_exec_grade;
		bool				_form_sign;

	public:
		class GradeTooHighException : public std::exception {
			public:
				virtual char const*	what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual char const*	what() const throw();
		};
};

std::ostream &	operator<<(std::ostream & o, Form const & form);

#endif