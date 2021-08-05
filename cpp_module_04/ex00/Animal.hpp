/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 12:28:02 by kaye              #+#    #+#             */
/*   Updated: 2021/08/05 12:39:20 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(Animal const & src);
		~Animal(void);

		Animal & operator=(Animal const & rhs);
	
	public:
		std::string getType(void) const;

	protected:
		std::string _type;
};

#endif