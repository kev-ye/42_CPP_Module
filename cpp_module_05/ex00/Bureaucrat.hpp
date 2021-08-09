/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:54:13 by kaye              #+#    #+#             */
/*   Updated: 2021/08/09 18:41:23 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <exception>

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const & name);
		Bureaucrat(Bureaucrat const & src);
		virtual	~Bureaucrat(void);

		Bureaucrat & operator=(Bureaucrat const & rhs);

	private:
		std::string const	_name;
		int					_note;
};




#endif