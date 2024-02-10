/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:35:07 by arahmoun          #+#    #+#             */
/*   Updated: 2024/02/09 18:53:31 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool    str_isDigit(std::string str)
{
    for (size_t i = 0; str[i]; i++)
    {
        if(!isdigit(str[i]) && str[i] != ' ')
            return 0;
    }
    return 1;
}

lisTypePair::iterator next(lisTypePair::iterator it, size_t index)
{
    std::advance(it, index);
    return it;
}

vecTypePair::iterator next(vecTypePair::iterator it, size_t index )
{
    std::advance(it, index);
    return it;
}

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(int ac, const char **av)
{
    if(ac == 1)
        throw ("Error");
    for (int i = 1; i < ac; i++)
        ss << av[i] << " ";
    ss2 << ss.str();
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
    *this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if(this != &other)
    {
        ss << other.ss.str();
        final_vector_time = other.final_vector_time;
        final_list_time = other.final_list_time;
        ss2 << other.ss2.str();
        pair_vec = other.pair_vec;
        pair_lis = other.pair_lis;
        size = other.size;
        v_is_pair = other.v_is_pair;
        l_is_pair = other.l_is_pair;
    }
    return (*this);
}

PmergeMe::~PmergeMe()
{
}
