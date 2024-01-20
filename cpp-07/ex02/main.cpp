/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:21:56 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/20 04:19:58 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


int main() {
    try {
        // Test construction with no parameter
        Array<char> arr1;
        std::cout << "arr1 size: " << arr1.size() << std::endl;

        // Test construction with unsigned int n
        Array<char> arr2(5);
        std::cout << "arr2 size: " << arr2.size() << std::endl;

        // Test copy construction and assignment operator
        Array<char> arr3(arr2);
        Array<char> arr4 = arr1;

        // Test subscript operator and out-of-bounds exception
        arr1[0] = 42;
        std::cout << "arr1[0]: " << arr1[0] << std::endl;

        std::cout << "arr2[2]: " << arr2[2] << std::endl;
        std::cout << "arr3[3]: " << arr3[3] << std::endl;

        // Uncomment the line below to test the out-of-bounds exception
        std::cout << "arr2[10]: " << arr2[10] << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}