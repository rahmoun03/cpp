/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectorSort.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:38:47 by arahmoun          #+#    #+#             */
/*   Updated: 2024/02/10 10:49:16 by arahmoun         ###   ########.fr       */
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
void PmergeMe::mergeInsert(vecTypePair &dst, size_t start, size_t midl, size_t end)
{
    vecTypePair::iterator i, j, k;

    k = next(dst.begin(), start);
    i = next(pair_vec.begin(), start);
    j = next(pair_vec.begin(), midl + 1);

    while (i != next(pair_vec.begin(), midl + 1) && j != next(pair_vec.begin(), end + 1))
    {
        if(i->second <= j->second)
        {
            k->first = i->first;
            k->second = i->second;
            i++;
            k++;
        }
        else
        {
            k->first = j->first;
            k->second = j->second;
            j++;
            k++;
        }
    }
    while (i != next(pair_vec.begin(), midl + 1))
    {
        k->first = i->first;
        k->second = i->second;
        i++;
        k++;
    }
    for (size_t j = start ; j <= end; j++)
    {
        next(pair_vec.begin(), j)->first = next(dst.begin(), j)->first;
        next(pair_vec.begin(), j)->second = next(dst.begin(), j)->second;
    }
}

void PmergeMe::sort_vec_element(vecTypePair &dst, size_t start, size_t end)
{
    if ( start < end )
    {
        int midl = (start + end) / 2;
        sort_vec_element(dst, start , midl);
        sort_vec_element(dst, midl + 1 , end);
        mergeInsert(dst, start, midl, end);
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
    sort_vec_pairs();
    vecTypePair dst(pair_vec.begin(), pair_vec.end());
    sort_vec_element(dst, 0, pair_vec.size() - 1);
    dst.clear();
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
