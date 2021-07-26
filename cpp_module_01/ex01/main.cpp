/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:46:10 by kaye              #+#    #+#             */
/*   Updated: 2021/07/26 15:54:23 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    
    int     to_new = 2;
    Zombie  *kaye = zombieHorde(to_new, "kaye");

    for (int i = 0; i < to_new; i++) {
        
        kaye[i].announce();
    }
 
    delete [] kaye; 
}