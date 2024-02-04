/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:35:07 by arahmoun          #+#    #+#             */
/*   Updated: 2024/02/04 23:53:32 by arahmoun         ###   ########.fr       */
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
        vec.push_back(number);
    }
    //print
    std::cout << "before sort : " ;
    std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " ")); 
    std::cout << "\n" ;
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
        vec.insert(vec.begin(), *it);
        v_first.erase(it);
    }
    if(!v_is_pair)
        vec.erase(vec.begin());
}



void PmergeMe::sort_vector(std::vector<int> &vec)
{
    stock_vector(vec);
    stock_pair_vector(vec);
    sort_vec_pairs();
    sort_vec_element();
    vec.clear();
    merge_vec(vec);



    //print
    std::cout << "after sort  : " ;
    std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " ")); 
    std::cout << "\n" ;
    
    
}













/***************************************************************************/

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(int ac, const char **av)
{
    if(ac == 1)
        throw ("Error");
    for (int i = 1; i < ac; i++)
        ss << av[i] << " ";
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
    *this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if(this != &other)
    {
     // TODO copy atrebuts
    }
    return (*this);
}

PmergeMe::~PmergeMe()
{
}
