/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 20:03:31 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/14 20:39:57 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout<<"str address :"<< &str <<std::endl;
    std::cout<<"ptr address :"<< stringPTR <<std::endl;
    std::cout<<"ref address :"<< &stringREF <<std::endl;

    std::cout<<"VALUE address :"<< str <<std::endl;
    std::cout<<"VALUE address :"<< *stringPTR <<std::endl;
    std::cout<<"VALUE address :"<< stringREF <<std::endl;
}