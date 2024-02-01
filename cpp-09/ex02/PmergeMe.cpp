/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:35:07 by arahmoun          #+#    #+#             */
/*   Updated: 2024/02/01 19:37:38 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

bool    str_isDigit(const char *str)
{
    for (size_t i = 0; str[i]; i++)
    {
        if(!isdigit(str[i]) && str[i] != ' ')
            return 0;
    }
    return 1;
}

PmergeMe::PmergeMe(int ac, const char **av)
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
    int number;
    vec.reserve(ac);
    
    // TODO for chrono ...
    
    // TODO stock data ...
    while (ss >> number)
        vec.push_back(number);
    // set = std::set<int>(vec.begin(), vec.end());
    

}
void PmergeMe::merge(void)
{
    int mid = vec.size()/2;
    std::vector<int> vec1(vec.begin(), vec.begin()+mid);
    std::vector<int> vec2(vec.begin()+mid, vec.end());
    insert_sort(vec1);
    insert_sort(vec2);
    vec.clear();
    while (vec1.size() != 0 && vec2.size() != 0)
    {
        std::cout << vec1.size() << "\n" ;
        (vec1.begin() < vec2.begin() ? vec.insert(vec.end() , *vec1.begin()) : vec.insert(vec.end() , *vec2.begin()));
        (vec1.begin() < vec2.begin() ? vec.erase(vec1.begin()) : vec.erase(vec2.begin()));
    }
    (vec1.size() == 0 ? vec.insert(vec.end(), *vec2.begin()) : vec.insert(vec.end(), *vec1.begin()));
}

void PmergeMe::merge_insert(int ac)
{
        /*-------------     insetion sort   ----------------*/
    // TODO befor sorting ...
    std::cout << "befor sorting : ";
    std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout , " "));
    
    //TODO sorting ...
    
    time_point start_time = std::chrono::high_resolution_clock::now();
    /*****************************************************************************/
    //TODO sort ...
    merge();
    /*****************************************************************************/
    time_point end_time = std::chrono::high_resolution_clock::now();
    microseconds finaltime = std::chrono::duration_cast<microseconds>(end_time - start_time);
    std::cout << std::endl << "after sorting : ";
    std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout , " "));
    std::cout << "\nTime to process a range of "<< ac-1 << " elements with std::vector : " << finaltime.count() << " us\n";
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
