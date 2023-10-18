/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:13:54 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/14 13:35:04 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

void randomChump(std::string name){
    Zombie zombie(name);
    zombie.announce();
}