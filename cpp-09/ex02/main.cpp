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
        object.stock_vector(vec);
        object.stock_list(lis);
        object.print(vec, "before : ");
        object.sort_vector(vec);
        object.sort_list(lis);
        object.print(vec, "after  : ");
        object.print_list_time(lis);
        object.print_vector_time(vec);
    }
    catch (const char *text)
    {
        std::cout << text << std::endl;    
    }
    return 0;
}
