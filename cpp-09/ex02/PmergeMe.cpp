/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:35:07 by arahmoun          #+#    #+#             */
/*   Updated: 2024/02/03 20:32:09 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
template <template <class, class> class Container, class T, class Allocator >
PmergeMe<Container, T, Allocator >::PmergeMe()
{
}

bool    str_isDigit(const char *str)
{
    for (size_t i = 0; str[i]; i++)
    {
        if(!isdigit(str[i]) && str[i] != ' ')
            return 0;
    }
    return 1;
}

template <template <class, class> class Container, class T, class Allocator >
PmergeMe<Container, T, Allocator >::PmergeMe(const PmergeMe<Container, T, Allocator > &other)
{
    *this = other;
}

template <template <class, class> class Container, class T, class Allocator >
PmergeMe<Container, T, Allocator > &PmergeMe<Container, T, Allocator >::operator=(const PmergeMe<Container, T, Allocator > &other)
{
    if(this != &other)
    {
     // TODO copy atrebuts
    }
    return (*this);
}

