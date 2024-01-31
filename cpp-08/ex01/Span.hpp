/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 08:53:39 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/29 20:22:44 by arahmoun         ###   ########.fr       */
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
    
        template <typename InputIterator, typename OutputIterator>
        void addNumber(InputIterator first, OutputIterator last);
        
        void display();
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

template <typename InputIterator, typename OutputIterator>
void Span::addNumber(InputIterator first, OutputIterator last)
{
    if (std::distance(first, last) > vec.capacity() - vec.size())
        throw(containerIsFull());
    std::copy(first, last, std::inserter(vec ,vec.end()));
}

#endif 