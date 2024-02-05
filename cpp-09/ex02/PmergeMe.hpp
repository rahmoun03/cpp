/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:31:19 by arahmoun          #+#    #+#             */
/*   Updated: 2024/02/05 12:42:39 by arahmoun         ###   ########.fr       */
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
#include <ctime>
#define GRAY "\033[30m"
#define GREEN "\033[32m"
#define DEF "\033[0m"

typedef std::vector<std::pair<int, int> > vecTypePair;
typedef std::list<std::pair<int, int> > lisTypePair;
class PmergeMe
{
    private:
        std::stringstream ss;
        double final_vector_time;
        double final_list_time;
        std::stringstream ss2;
        vecTypePair pair_vec;
        lisTypePair pair_lis;
        size_t  size;
        bool v_is_pair;
        bool l_is_pair;
        PmergeMe();
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other);
    
    public:
        PmergeMe(int ac, const char **av);
        ~PmergeMe();
        
        // vector
        void sort_vector(std::vector<int> &vec);
        void stock_vector(std::vector<int> &vec);
        void stock_pair_vector(std::vector<int> &vec);
        void sort_vec_pairs();
        void sort_vec_element();
        void merge_vec(std::vector<int> &vec);
        
        //list
        void sort_list(std::list<int> &lis);
        void stock_list(std::list<int> &lis);
        void stock_pair_list(std::list<int> &lis);
        void sort_list_pairs();
        void sort_list_element();
        void merge_list(std::list<int> &lis);
        
        //info
        void print(std::vector<int> &vec, const char *text);
        void print(std::list<int> &lis, const char *text);
        void print_vector_time(std::vector<int> &vec);
        void print_list_time(std::list<int> &vec);
};
bool    str_isDigit(std::string str);

#endif
