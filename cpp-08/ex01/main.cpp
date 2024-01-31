/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 09:48:51 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/30 09:38:42 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void    fill_span(Span &sp, unsigned int size_)
{
    srand(time(NULL));
    for (unsigned int i = 0; i < size_ ; i++)
    {
        const int value = rand() % size_;
        sp.addNumber(value);
    }
}

int main()
{
    try
    {
        unsigned int size = 10000;
        Span sp = Span(size);
        fill_span(sp, size);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        int arr[] = {12,45,40,6,87,1,3,123};
        Span s(8);
        s.addNumber(104);
        s.addNumber(104);
        s.addNumber(104);
        s.addNumber(104);
        std::vector<int> vec(arr, arr + 8);
        s.addNumber(vec.begin()+4, vec.end());
        std::cout << s.shortestSpan() << std::endl;
        std::cout << s.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
