/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_awesome.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 18:15:10 by kaye              #+#    #+#             */
/*   Updated: 2021/07/21 19:15:38 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_AWESOME_HPP
# define MY_AWESOME_HPP

/* C++ LIB */
#include <iostream>
#include <string>
#include <iomanip>

/* RET DEFINE */
#define SUCCESS 0
#define FAILURE 1

/* CONTACT DEFINE */
#define CONTACT_NBR 8
#define INFO_NBR 5

/* CMD DEFINE */
#define EXIT "EXIT"
#define ADD "ADD"
#define SEARCH "SEARCH"

/* CONTACT STRUCT */
enum	e_info {
	e_FIRST_NAME,
	e_LAST_NAME,
	e_NICK_NAME,
	e_PHONE_NBR,
	e_DARKEST_SECRET
};

typedef struct s_contact
{
	std::string info[INFO_NBR];
}	t_contact;


#endif