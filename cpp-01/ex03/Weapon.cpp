/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 21:16:04 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/15 12:26:44 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./Weapon.hpp"

Weapon::Weapon(std::string _type)
{
	type = _type;
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

std::string&    Weapon::getType(){
	return type;
}

void    Weapon::setType(std::string replace){
	type = replace;
}
