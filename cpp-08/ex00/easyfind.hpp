/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:07:04 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/21 08:48:44 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include <exception>

template<class T>
void    easyFind(T &container, int value)
{
    if (find(container.begin(), container.end(), value) != container.end())
        std::cout << "found >_< " << std::endl;
    else
        std::cout << "not found -_- " << std::endl;
}

#endif 