/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:33:45 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/14 20:01:45 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main() {

	Zombie *obj;
	int N = 3;
	
	obj = zombieHorde(N, "ayoub");
	
	for (int i = 0; i < N; i++)
	{
		obj[i].announce();
	}
	delete[] obj;
	return 0;
}