/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:22:15 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/20 03:33:20 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <class T>
class Array
{
    private:
        unsigned int size_;
        T *array;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array<T> &other);
        Array<T> &operator=(const Array<T> &other);
        T &operator[](unsigned int index);
        unsigned int size() const;
        ~Array();
        class OutOfBounds : public std::exception
        {
            public :
                const char* what() const _NOEXCEPT;
        };
};

#include "Array.tpp"

#endif 