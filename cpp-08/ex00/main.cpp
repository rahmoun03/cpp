/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 03:50:07 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/21 09:44:40 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    // vector
    std::list <int> vec;

    vec.__emplace_back(42);
    vec.__emplace_back(1337);
    vec.__emplace_back(100);
    vec.__emplace_back(01);
    vec.__emplace_back(03);
    easyFind(vec, 1);
    vec.sort();
    for (std::list<int>::iterator it = vec.begin(); it != vec.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
    

    // lis
    std::list<int> list(4, 44);
    easyFind(list, 4);

    return 0;
}
