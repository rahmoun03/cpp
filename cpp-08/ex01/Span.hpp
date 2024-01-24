/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 08:53:39 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/24 09:26:38 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP 
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <exception>

class Span
{
    private:
        std::vector<int> vec;
        unsigned int size_;
        Span();
    public:
        Span(unsigned int N);
        ~Span();
        void    addNumber(int value);
        int     shortestSpan() const;
        int     longestSpan() const;
        class containerIsFull : public std::exception
        {
            public :
                const char* what() const _NOEXCEPT;
        };
        class noSpanToFind : public std::exception
        {
            public :
                const char* what() const _NOEXCEPT;
        };
};

#endif 