/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:31:19 by arahmoun          #+#    #+#             */
/*   Updated: 2024/02/10 10:46:48 by arahmoun         ###   ########.fr       */
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
typedef std::vector<int>::iterator itVecType;
typedef std::list<int>::iterator itLisType;
class PmergeMe
{
    private:
        std::stringstream ss;
        double final_vector_time;
        double final_list_time;
        std::stringstream ss2;
        vecTypePair pair_vec;
        lisTypePair pair_lis;
        std::vector<int> odd_vec;
        std::list<int> odd_lis;
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
        void sort_vec_element(vecTypePair &dst, size_t start, size_t end);
        void merge_vec(std::vector<int> &v_first);
        void mergeInsert(vecTypePair &dst, size_t start, size_t midl, size_t end);

        //list
        void sort_list(std::list<int> &lis);
        void stock_list(std::list<int> &lis);
        void stock_pair_list(std::list<int> &lis);
        void sort_list_pairs();
        void sort_list_element(lisTypePair &dst, size_t start, size_t end);
        void merge_list(std::list<int> &lis);
        void mergeInsert(lisTypePair &dst, size_t start, size_t midl, size_t end);


        //info
        void print(std::vector<int> &vec, const char *text);
        void print(std::list<int> &lis, const char *text);
        void print_vector_time(std::vector<int> &vec);
        void print_list_time(std::list<int> &vec);
};
bool    str_isDigit(std::string str);
vecTypePair::iterator next(vecTypePair::iterator it, size_t index);
lisTypePair::iterator next(lisTypePair::iterator it, size_t index);

#endif


    // vecTypePair dst(pair_vec.size());
    // size_t i, j, k;

    // k = start;
    // i = start;
    // j = midl + 1;

    // while (i <= midl && j <= end)
    // {
    //     if(pair_vec[i].second <= pair_vec[j].second)
    //     {
    //         dst[k].first = pair_vec[i].first;
    //         dst[k].second = pair_vec[i].second;
    //         i++;
    //         k++;
    //     }
    //     else
    //     {
    //         dst[k].first = pair_vec[j].first;
    //         dst[k].second = pair_vec[j].second;
    //         j++;
    //         k++;
    //     }
    // }



    // vecTypePair dst(pair_vec.size());
    // vecTypePair::iterator i, j, k;

    // k = next(dst.begin(), start);
    // i = next(pair_vec.begin(), start);
    // j = next(pair_vec.begin(), midl + 1);

    // while (i != next(pair_vec.begin(), midl + 1) && j != next(pair_vec.begin(), end + 1))
    // {
    //     if(i->second <= j->second)
    //     {
    //         k->first = i->first;
    //         k->second = i->second;
    //         i++;
    //         k++;
    //     }
    //     else
    //     {
    //         k->first = j->first;
    //         k->second = j->second;
    //         j++;
    //         k++;
    //     }
    // }

    // //copy remaining elements
    // while (i != next(pair_vec.begin(), midl + 1))
    // {
    //     k->first = i->first;
    //     k->second = i->second;
    //     i++;
    //     k++;
    // }

    // // copy back to the original array to reflect sorted order
    // // pair_vec.clear();
    // for (size_t i = start ; i < end; ++i)
    // {
    //     next(pair_vec.begin(), i)->first = next(dst.begin(), i)->first;
    //     next(pair_vec.begin(), i)->second = next(dst.begin(), i)->second;
    // }
    // dst.clear();
