/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 21:17:07 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/15 14:51:35 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name){
}

HumanB::~HumanB()
{
}

void    HumanB::attack(){
    std::cout << name <<" attacks with their " << ob.getType() << std::endl;
}

void    HumanB::setWeapon(Weapon& obj){

    ob = obj;
}

