/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:38:51 by kaye              #+#    #+#             */
/*   Updated: 2021/08/16 16:40:02 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

class Intern {
	public:
		Intern(void);
		Intern(Intern const & src);
		~Intern(void);

		Intern &	operator=(Intern const & rhs);
};

#endif