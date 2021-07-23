/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 17:34:21 by kaye              #+#    #+#             */
/*   Updated: 2021/07/23 13:12:55 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact (void) {
	
	return ;
}

Contact::~Contact (void) {

	return ;
}

void	Contact::info_clean(void) {
	
	for (int i = 0; i < INFO_NBR; i++)
		this->info[i].clear();
}

bool	Contact::info_is_empty(void) const {
	
	for (int i = 0; i < INFO_NBR; i++) {

		if (this->info[i].empty() == false)
			return (false);
	}
	return (true);
}