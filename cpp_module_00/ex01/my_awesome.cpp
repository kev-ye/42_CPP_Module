/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_awesome.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 17:34:21 by kaye              #+#    #+#             */
/*   Updated: 2021/07/21 18:55:16 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_awesome.hpp"
#include "my_awesome.class.hpp"

my_awesome::my_awesome(void) {
    std::cout << "constructor called" << std::endl;
    return ;
}

my_awesome::~my_awesome(void) {
    std::cout << "destructor called" << std::endl;
    return ;
}

