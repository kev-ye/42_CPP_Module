/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 17:46:00 by kaye              #+#    #+#             */
/*   Updated: 2021/07/23 13:14:24 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

#define INFO_NBR 5

class Contact {

	public:
		Contact(void);
		~Contact(void);

	public:
		enum	e_info {
				e_FIRST_NAME,
				e_LAST_NAME,
				e_NICKNAME,
				e_PHONE_NBR,
				e_DARKEST_SECRET
		};
		std::string	info[INFO_NBR];

	public:
		void	info_clean(void);
		bool	info_is_empty(void) const;
};

#endif
