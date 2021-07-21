/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 17:57:07 by kaye              #+#    #+#             */
/*   Updated: 2021/07/21 19:17:18 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_awesome.hpp"
#include "my_awesome.class.hpp"

void	enter_first_name(void)
{
	
}

int main(void) {

	std::string name;

    std::getline (std::cin, name);
	std::cout << name;

    return SUCCESS;
}