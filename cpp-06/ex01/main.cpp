/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:57:12 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/09 14:34:53 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data* original_ptr = new Data{42};
    uintptr_t int_ptr = Serializer::serialize(original_ptr);
    Data* re_ptr = Serializer::deserialize(int_ptr);

    if (re_ptr == original_ptr)
    {
        std::cout << re_ptr << std::endl;
        std::cout << original_ptr << std::endl;
        std::cout << GREEN << "Serialization and deserialization successful!" << DEF << std::endl;
    }
    else
    {
        std::cout << re_ptr << std::endl;
        std::cout << original_ptr << std::endl;
        std::cout << RED <<"Serialization or deserialization failed!" << DEF << std::endl;
    }

    delete original_ptr;

    return 0;
}