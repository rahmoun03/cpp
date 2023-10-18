/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 21:17:12 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/15 14:51:25 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon ob;
    public:
        HumanB(std::string _name);
        ~HumanB();
        void    setWeapon(Weapon& obj);
        void    attack();
};

#endif