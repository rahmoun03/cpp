/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 22:33:45 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/14 13:34:54 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main() {

    // Allocate zombies on the stack
    Zombie stackZombie("Stack Zombie");
    stackZombie.announce();

    // Allocate zombies on the heap
    Zombie* heapZombie = newZombie("Heap Zombie");
    heapZombie->announce();

    // Random chump
    randomChump("Chump Zombie");

    // Clean up heap-allocated zombie
    delete heapZombie;

    return 0;
}