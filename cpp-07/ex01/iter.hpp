/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:53:36 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/19 22:59:21 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void    printelement(T &element)
{
    std::cout << element << " " ;
}

template<class T>
void    iter(T *array, size_t lenght, void (func)(T &element))
{
    for (size_t i = 0; i < lenght; i++)
        func(array[i]);
}

#endif 