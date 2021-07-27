/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 18:38:42 by kaye              #+#    #+#             */
/*   Updated: 2021/07/27 18:57:21 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN.HPP
# define KAREN.HPP

class Karen {
	
	public:
		karen(void);
		~karen(void);

	public:
		void	complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif