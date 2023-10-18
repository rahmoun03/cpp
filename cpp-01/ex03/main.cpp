/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 21:16:04 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/15 16:22:12 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanA.hpp"
#include "./HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("fardi");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("9nbola");
        bob.attack();
    }
    {
        Weapon club = Weapon("hrawa");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("moooos");
        jim.setWeapon(club);
        jim.attack();
    }
    return 0;
}
