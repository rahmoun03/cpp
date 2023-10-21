/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:52:08 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/14 20:01:27 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *obj;

	obj = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		obj[i].setName(name);
	}
	return (obj);
}