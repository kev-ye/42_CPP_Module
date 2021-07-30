/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:52:46 by kaye              #+#    #+#             */
/*   Updated: 2021/07/30 18:02:20 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &	src);
		~Fixed(void);

	Fixed &	operator=(Fixed const & rhs);

	public:
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_fixed;
		static int const	_bits;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);

#endif