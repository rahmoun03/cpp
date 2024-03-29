/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 03:50:07 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/31 13:40:37 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    // vector
    std::list <int> vec;
    vec.push_back(42);
    vec.push_back(1337);
    vec.push_back(100);
    vec.push_back(01);
    vec.push_back(03);
    easyFind(vec, 1);
    vec.sort();
    for (std::list<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << std::endl;
    // lis
    std::list<int> list(4, 44);
    easyFind(list, 4);

    return 0;
}
