/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 09:48:11 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/29 19:58:16 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N)
{
    size_ = N;
    vec.reserve(N);
}

void    Span::addNumber(int value) 
{
    if (size_ <= vec.size())
        throw(containerIsFull());
    vec.push_back(value);
}

int Span::shortestSpan() const
{
    if (vec.size() <= 1)
        throw(noSpanToFind());
    std::vector<int> tmp(vec);
    std::sort(tmp.begin(), tmp.end());
    int small = *(tmp.begin()+1) - (*tmp.begin());
    std::vector<int>::iterator it = tmp.begin();
    for (size_t i = 1 ; i < tmp.size(); ++i)
    {
        if (*(it + 1) - (*it) < small)
            small = *(it + 1) - (*it);
        it++;
    }
    return(small);
}

int Span::longestSpan() const
{
    if (vec.size() <= 1)
        throw(noSpanToFind());
    std::vector<int> tmp(vec);
    std::sort(tmp.begin(), tmp.end());
    return(tmp.back() - tmp.front());
}

void Span::display()
{
    std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
}

const char* Span::containerIsFull::what() const _NOEXCEPT
{
    return "the container is full";
}

const char* Span::noSpanToFind::what() const _NOEXCEPT
{
    return "dont have enough span to search for longtest or shortest one !";
}

Span::~Span()
{
}

