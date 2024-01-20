/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 01:50:40 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/19 22:59:15 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int arr_int[6] = {1,2,3,4,5,6};
    std::string array[5] = {"ayoub" , "simo", "younes", "jawad", "chabab"} ;
    char arr_char[6] = "ayoub";

    std::cout << "test for array to int \n" ;
    iter(arr_int, 6, printelement);
    std::cout << std::endl;

    std::cout << "test for array to char \n" ;
    iter(arr_char, 5, printelement);
    std::cout << std::endl;

    std::cout << "test for array to string \n" ;
    iter(array, 5, printelement);
    std::cout << std::endl;

    return 0;
}