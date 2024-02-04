/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:31:19 by arahmoun          #+#    #+#             */
/*   Updated: 2024/02/04 23:47:30 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>
#include <exception>
#define GRAY "\033[30m"
#define GREEN "\033[32m"
#define DEF "\033[0m"

typedef std::vector<std::pair<int, int> > vecTypePair;
typedef std::list<std::pair<int, int> > lisTypePair;
class PmergeMe
{
    private:
        std::stringstream ss;
        vecTypePair pair_vec;
        lisTypePair pair_lis;
        size_t  size;
        bool v_is_pair;
        bool l_is_pair;
    public:
        PmergeMe();
        PmergeMe(int ac, const char **av);
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
        ~PmergeMe();

        void sort_vector(std::vector<int> &vec);
        void stock_vector(std::vector<int> &vec);
        void stock_pair_vector(std::vector<int> &vec);
        void sort_vec_pairs();
        void sort_vec_element();
        void merge_vec(std::vector<int> &vec);
};

#endif
