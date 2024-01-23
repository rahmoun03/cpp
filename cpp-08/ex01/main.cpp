/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 09:48:51 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/22 15:29:51 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void    fill_span(Span &sp, unsigned int size_)
{
    srand(time(NULL));
    for (unsigned int i = 0; i < size_ ; i++)
    {
        const int value = rand();
        sp.addNumber(value);
    }
}

int main()
{
    try
    {
        unsigned int size = 11;
        Span sp = Span(size);
        sp.addNumber(10);
        sp.addNumber(12);
        fill_span(sp, size - 2);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
