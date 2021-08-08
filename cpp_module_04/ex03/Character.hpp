/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:18:04 by kaye              #+#    #+#             */
/*   Updated: 2021/08/08 18:04:41 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

#define INVENTORY 4

class Character : public ICharacter {
	public:
		Character(void);
		Character(std::string name);
		Character(Character const & src);
		virtual ~Character(void);

		Character &	operator=(Character const & rhs);
	
	public:
		std::string	const &	getName(void) const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter & target);

	private:
		std::string	_name;
		AMateria	*_m[INVENTORY];
};

#endif