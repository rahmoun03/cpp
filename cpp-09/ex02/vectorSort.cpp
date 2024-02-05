/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectorSort.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:38:47 by arahmoun          #+#    #+#             */
/*   Updated: 2024/02/05 14:35:53 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void PmergeMe::stock_pair_vector(std::vector<int> &vec)
{
    (!(vec.size() % 2) ? v_is_pair = true : v_is_pair = false);
    std::vector<int>::iterator it = vec.begin();
    for (size_t i = 0; i < vec.size() / 2 ; ++i)
    {
        pair_vec.push_back(std::pair<int, int>(*it, *(it + 1)));
        it+=2;
    }
    if(!v_is_pair)
        pair_vec.push_back(std::pair<int, int>(*it, -1));
}


void PmergeMe::stock_vector(std::vector<int> &vec)
{
    std::string tmp;
    int number;
    while (ss >> tmp)
    {
        if(!str_isDigit(tmp))
            throw ("Error");
        if((number = std::atoi(tmp.c_str())) < 0)
            throw ("Error");
        if(!std::count(vec.begin(), vec.end() , number))
            vec.push_back(number);
    }
    if(vec.empty())
        throw("Error");
}

void PmergeMe::sort_vec_pairs()
{
    for (vecTypePair::iterator it = pair_vec.begin() ; it != pair_vec.end() ; ++it)
    {
        if(it->first > it->second)
        {
            int tmp = it->second;
            it->second = it->first;
            it->first = tmp;
        }
    }
}

void PmergeMe::sort_vec_element()
{
    for (vecTypePair::iterator it = pair_vec.begin(); it != pair_vec.end() - 1; ++it)
    {
        for (vecTypePair::iterator next = it + 1 ; next != pair_vec.end() ; ++next)
        {
            if(it->second > next->second)
            {
                int first = next->first;
                int second = next->second;
                pair_vec.erase(next);
                pair_vec.insert(it, std::pair<int, int>(first, second));
            }
        }
    }
}

void PmergeMe::merge_vec(std::vector<int> &vec)
{
    std::vector<int> v_first;

    for (vecTypePair::iterator it = pair_vec.begin(); it != pair_vec.end(); ++it)
    {
        v_first.push_back(it->first);
        vec.push_back(it->second);
    }
    pair_vec.clear();
    while (v_first.size())
    {
        std::vector<int>::iterator it = std::max_element(v_first.begin(), v_first.end());
        std::vector<int>::iterator index = std::upper_bound(vec.begin(), vec.end(), *it);
        vec.insert(index, *it);
        v_first.erase(it);
    }
    if(!v_is_pair)
        vec.erase(vec.begin());
}



void PmergeMe::sort_vector(std::vector<int> &vec)
{
    clock_t start = clock();
    stock_pair_vector(vec);
    sort_vec_pairs();
    sort_vec_element();
    vec.clear();
    merge_vec(vec);
    clock_t end = clock();
    final_vector_time = ((double)(end - start) / CLOCKS_PER_SEC) * 1000;
}

void PmergeMe::print(std::vector<int> &vec, const char *text)
{
    std::cout << text;
    std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " ")); 
    std::cout << "\n" ;
    
}

void PmergeMe::print_vector_time(std::vector<int> &vec)
{
    std::cout << "Time to process a range of " << vec.size() 
                << " elements with std::vector : " << final_vector_time << " us\n";
}
