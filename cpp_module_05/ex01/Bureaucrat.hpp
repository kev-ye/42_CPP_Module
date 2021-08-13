/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:54:13 by kaye              #+#    #+#             */
/*   Updated: 2021/08/13 19:05:33 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const & name, int const note);
		Bureaucrat(Bureaucrat const & src);
		virtual	~Bureaucrat(void);

		Bureaucrat &	operator=(Bureaucrat const & rhs);

	public:
		std::string const &	getName(void) const;
		int	const &			getGrade(void) const;
		void				incGrade(void);
		void				decGrade(void);

		void	signForm(Form & form);

	private:
		std::string const	_name;
		int					_note;

	public:
		class GradeTooHighException : public std::exception {
			public:
				virtual char const *	what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual char const *	what() const throw();
		};
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & Bureaucrat);

#endif