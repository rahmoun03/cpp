/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectorSort.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:38:47 by arahmoun          #+#    #+#             */
/*   Updated: 2024/02/07 13:23:32 by arahmoun         ###   ########.fr       */
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
        odd_vec.push_back(*it);
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
// TODO recursive sort
void PmergeMe::sort_vec_element(vecTypePair::iterator start, vecTypePair::iterator next,vecTypePair::iterator end)
{
    if (start != end)
    {
        if(next != std::next(end, 1))
        {
            if(start->second > next->second)
            {
                int first = next->first;
                int second = next->second;
                pair_vec.erase(next);
                pair_vec.insert(start, std::pair<int, int>(first, second));
            }
            sort_vec_element(start, ++next, end);
            sort_vec_element(++start, std::next(start, 1), end);
        }
    }
    // std::cout << "A ";
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
        std::vector<int>::iterator it = v_first.begin();
        std::vector<int>::iterator index = std::upper_bound(vec.begin(), vec.end(), *it);
        vec.insert(index, *it);
        v_first.erase(it);
    }
    if(!v_is_pair)
    {
        std::vector<int>::iterator it = odd_vec.begin();
        std::vector<int>::iterator index = std::upper_bound(vec.begin(), vec.end(), *it);
        vec.insert(index, *it);
        odd_vec.clear();
    }
}



void PmergeMe::sort_vector(std::vector<int> &vec)
{
    clock_t start = clock();
    stock_pair_vector(vec);
    std::cout << "begin : "<< pair_vec.begin()->first <<" next : " << (++pair_vec.begin())->first << " after end : "<< (--pair_vec.end())->first << std::endl;
    sort_vec_pairs();
    sort_vec_element(pair_vec.begin(), ++pair_vec.begin(), --pair_vec.end());
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
