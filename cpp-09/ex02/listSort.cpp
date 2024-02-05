/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listSort.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:39:11 by arahmoun          #+#    #+#             */
/*   Updated: 2024/02/05 14:35:24 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void PmergeMe::stock_pair_list(std::list<int> &lis)
{
    (!(lis.size() % 2) ? v_is_pair = true : v_is_pair = false);
    std::list<int>::iterator it = lis.begin();
    for (size_t i = 0; i < lis.size() / 2 ; ++i)
    {
        pair_lis.push_back(std::pair<int, int>(*it, *(++it)));
        it++;
    }
    if(!v_is_pair)
        pair_lis.push_back(std::pair<int, int>(*it, -1));
}


void PmergeMe::stock_list(std::list<int> &lis)
{
    std::string tmp;
    int number;
    while (ss2 >> tmp)
    {
        if(!str_isDigit(tmp))
            throw ("Error");
        if((number = std::atoi(tmp.c_str())) < 0)
            throw ("Error");
        if(!std::count(lis.begin(), lis.end() , number))
            lis.push_back(number);
    }
    if(lis.empty())
        throw("Error");
}

void PmergeMe::sort_list_pairs()
{
    for (lisTypePair::iterator it = pair_lis.begin() ; it != pair_lis.end() ; ++it)
    {
        if(it->first > it->second)
        {
            int tmp = it->second;
            it->second = it->first;
            it->first = tmp;
        }
    }
    
}

void PmergeMe::sort_list_element()
{
    lisTypePair::iterator it = pair_lis.begin();
    lisTypePair::iterator end = --it;
    it++;
    for (; it != end; ++it)
    {
        for (lisTypePair::iterator next = std::next(it); next != pair_lis.end() ; ++next)
        {
            if(it->second > next->second)
            {
                int first = next->first;
                int second = next->second;
                pair_lis.erase(next);
                pair_lis.insert(it, std::pair<int, int>(first, second));
            }
        }
    }
}

void PmergeMe::merge_list(std::list<int> &lis)
{
    std::list<int> v_first;

    for (lisTypePair::iterator it = pair_lis.begin(); it != pair_lis.end(); ++it)
    {
        v_first.push_back(it->first);
        lis.push_back(it->second);
    }
    pair_lis.clear();
    while (v_first.size())
    {
        std::list<int>::iterator it = std::max_element(v_first.begin(), v_first.end());
        std::list<int>::iterator index = std::upper_bound(lis.begin(), lis.end(), *it);
        lis.insert(index, *it);
        v_first.erase(it);
    }
    if(!v_is_pair)
        lis.erase(lis.begin());
}



void PmergeMe::sort_list(std::list<int> &lis)
{
    clock_t start = clock();
    stock_pair_list(lis);
    sort_list_pairs();
    sort_list_element();
    lis.clear();
    merge_list(lis);
    clock_t end = clock();
    final_list_time = ((double)(end - start) / CLOCKS_PER_SEC) * 1000;
}

void PmergeMe::print(std::list<int> &lis, const char *text)
{
    std::cout << text;
    std::copy(lis.begin(), lis.end(), std::ostream_iterator<int>(std::cout, " ")); 
    std::cout << "\n" ;
}

void PmergeMe::print_list_time(std::list<int> &lis)
{
    std::cout << "Time to process a range of " << lis.size() 
                << " elements with std::list : " << final_list_time << " us\n";
}

