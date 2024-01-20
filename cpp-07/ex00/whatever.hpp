/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 23:39:00 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/19 23:12:55 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP 

#include <iostream>

template<class T>
void    swap(T &a, T &b)
{
    T c = a;
    a = b;
    b = c;
}

template<class T>
T   &min(T &a, T &b)
{
    return (a < b ? a : b);
}

template<typename T>
T   &max(T &a, T &b)
{
    return (a > b ? a : b);
}

#endif