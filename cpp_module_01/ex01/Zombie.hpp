/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:45:55 by kaye              #+#    #+#             */
/*   Updated: 2021/07/26 14:58:28 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    
    public:
        Zombie(std::string name);
        ~Zombie(void);

    public:
        void	announce(void);
		
	private:
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif