/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:35:23 by arahmoun          #+#    #+#             */
/*   Updated: 2024/02/03 15:42:17 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        std::vector<int > vec;
        std::list<int > lis;
        PmergeMe object(argc, argv);
        object.sort_vector(vec);
    }
    catch (const char *text)
    {
        std::cout << text << std::endl;    
    }
    return 0;
}
