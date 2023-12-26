/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 21:17:18 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/15 12:21:22 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{	
	private:
		std::string type;
	public:
		Weapon(std::string _type);
		Weapon();
		~Weapon();
		std::string&  getType();
		void    setType(std::string replace);
};



#endif