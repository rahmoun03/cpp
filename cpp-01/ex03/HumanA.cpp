/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 21:16:04 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/15 15:05:30 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& obj) : name(_name), ob(obj)
{  
}

HumanA::~HumanA()
{
}

void    HumanA::attack(){
    std::cout << name <<" attacks with their "<< ob.getType() <<std::endl;
}