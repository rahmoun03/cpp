/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:31:19 by arahmoun          #+#    #+#             */
/*   Updated: 2024/02/03 23:27:44 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
#include <iostream>
#include <sstream>
#include <vector>
#include <deque>
#include <iterator>
#include <algorithm>
#include <exception>
#define GRAY "\033[30m"
#define GREEN "\033[32m"
#define DEF "\033[0m"

typedef std::chrono::time_point<std::chrono::steady_clock> time_point;
typedef std::chrono::microseconds microseconds;

template <template <class, class> class Container, class T, class Allocator = std::allocator<T> >
class PmergeMe
{
    private:
        std::stringstream ss;
        Container<T, Allocator> dst;
        time_point start_time;
        time_point end_time;
        microseconds final_time;
    public:
        PmergeMe();
        PmergeMe(int ac, const char **av);
        PmergeMe(const PmergeMe<Container, T, Allocator > &other);
        PmergeMe<Container, T, Allocator > &operator=(const PmergeMe<Container, T, Allocator > &other);
        
        typedef Container<std::pair<int , int>, std::allocator<std::pair<int , int> > > pairCont;
        typedef typename pairCont::iterator pairIt;
        

        void printBefore();
        void printAfter();
        void printTime(const char *arr);
        void sort();
        void insert_sort(pairIt it, pairIt nextIt, pairCont &Cn);
        
        ~PmergeMe();
};

bool    str_isDigit(const char *str);

template <template <class, class> class Container, class T, class Allocator >
void PmergeMe<Container, T, Allocator >::insert_sort(pairIt it, pairIt nextIt, pairCont &Cn)
{
    if(nextIt == Cn.end() || it == Cn.end() - 1)
        return;
    if(it->first >= nextIt->first)
    {
        int first = nextIt->first;
        int second = nextIt->second;
        Cn.erase(nextIt);
        Cn.insert(it, std::make_pair(first, second));
    }
    insert_sort(it + 2, nextIt + 2, Cn);
}


template <template <class, class> class Container, class T, class Allocator >
void    PmergeMe<Container, T, Allocator >::printBefore()
{
    std::cout << "Before sorting : ";
    std::copy(dst.begin(), dst.end(), std::ostream_iterator<int>(std::cout , " "));
    std::cout << std::endl;
}

template <template <class, class> class Container, class T, class Allocator >
void    PmergeMe<Container, T, Allocator >::printAfter()
{
    std::cout << "After sorting : ";
    std::copy(dst.begin(), dst.end(), std::ostream_iterator<int>(std::cout , " "));
    std::cout << std::endl;
}
template <template <class, class> class Container, class T, class Allocator >
void    PmergeMe<Container, T, Allocator >::printTime(const char *arr)
{
    std::cout << "Time to process a range of "<< dst.size() << " elements with "<< arr <<" : " << final_time.count() << " us\n";
}

template <template <class, class> class Container, class T, class Allocator >
void PmergeMe<Container, T, Allocator >::sort()
{
        /*-------------     start time   ----------------*/
    start_time = std::chrono::high_resolution_clock::now();
    //TODO sort ...
    /*****************************************************************************/
    int grp = dst.size()/2;
    int PAIR = false;
    pairCont distination;
    typename Container<T, Allocator>::iterator it = dst.begin();
    
    (!(dst.size() % 2) ? PAIR = true : PAIR = false);
    for (size_t i = 0; i < grp; i++)
    {
        distination.push_back(std::make_pair(*it, *(it + 1)));
        it += 2;
    }
    if(!PAIR)
        distination.push_back(std::make_pair(*it, -1));
    insert_sort(distination.begin(), distination.begin()+1, distination);
    

    // print
    for (pairIt it = distination.begin(); it != distination.end() ; it++)
        std::cout<< it->first << " <-> " << it->second << std::endl;

    /*****************************************************************************/
    end_time = std::chrono::high_resolution_clock::now();
    final_time = std::chrono::duration_cast<microseconds>(end_time - start_time);
}

template <template <class, class> class Container, class T, class Allocator >
PmergeMe<Container , T, Allocator >::PmergeMe(int ac, const char **av)
{
    if(ac == 1)
    {
        std::cout << "Error\n";
        exit(1);
    }
    for (int i = 1; i < ac; i++)
    {
        if(!str_isDigit(av[i]))
        {
            std::cout << "Error\n";
            exit(1);
        }
        ss << av[i] << " ";
    }
    start_time = time_point();
    end_time = time_point();
    int number;
    while (ss >> number)
        dst.push_back(number);
}

template <template <class, class> class Container, class T, class Allocator >
PmergeMe<Container, T, Allocator >::~PmergeMe()
{
}


#endif
