/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:31:19 by arahmoun          #+#    #+#             */
/*   Updated: 2024/02/01 13:33:20 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
#include <iostream>
#include <sstream>
#include <vector>
#include <set>
#include <list>
#include <iterator>
#include <algorithm>
#include <exception>
#define GRAY "\033[30m"
#define GREEN "\033[32m"
#define DEF "\033[0m"

class PmergeMe
{
    private:
        std::stringstream ss;
        std::vector<int> vec;
        std::set<int> set;
    public:
        typedef std::chrono::high_resolution_clock::time_point time_point;
        typedef std::chrono::microseconds microseconds;
        PmergeMe();
        PmergeMe(int ac, const char **av);
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
        
        void merge_insert(int ac);
        void merge(void);
        
        template<typename T>
        void insert_sort(T &vect);
        
        ~PmergeMe();
};

template<typename T>
void PmergeMe::insert_sort(T &vect)
{
    for (size_t i = 0; i < vect.size() - 1; i++)
    {
        for (size_t j = i + 1; j < vect.size(); j++)
        {
            if(vect[i] > vect[j])
            {
                int N = vect[j];
                vect.erase(vect.begin()+j);
                vect.insert(vect.begin()+i, N);
            }
        }
    }
}

#endif
