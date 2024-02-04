/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:35:23 by arahmoun          #+#    #+#             */
/*   Updated: 2024/02/03 15:42:17 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char const *argv[])
{
    PmergeMe<std::vector, int > vec(argc ,argv);
    vec.printBefore();
    vec.sort();


    // PmergeMe<std::deque , int > dq(argc ,argv);
    // dq.printBefore();
    // dq.sort();


    // dq.printAfter();
    // dq.printTime(" std::deque ");
    // vec.printTime(" std::vector ");
    return 0;
}
