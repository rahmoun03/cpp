/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:55:54 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/08 11:35:32 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::add()
{
    std::cout<<GREEN<<"enter the first name : " << DEF;
    std::cin>>firstName;
    std::cout<<GREEN<<"enter the last name : "<<DEF;
    std::cin>>lastName;
    std::cout<<GREEN<<"enter nickname name : "<<DEF;
    std::cin>>nickName;
    std::cout<<GREEN<<"enter phone number : "<<DEF;
    std::cin>>number;
}

Contact::Contact(){
    index = 0;
}

void    Contact::print_contacts()
{
    std::cout<<"|"<<index<<"         |";
    getter(firstName);
    getter(lastName);
    getter(nickName);
    std::cout<<std::endl;
}

void    Contact::getter(std::string str)
{
    long unsigned int i = 0;
    
    while(i < str.length() && i < 9)
    {
        std::cout << str[i];
        i++;
    }
    if (str.length() == 10)
    {
        std::cout<<str[9]<<"|";
    }
    else if (str.length() > 10)
    {
        std::cout << ".|";
    }
    else
    {
        while (i < 10)
        {
            std::cout<<" ";
            i++;
        }
        std::cout <<"|";
    }
}

void    Contact::print_info(){
    std::cout<<"the fisrt name is : "<<firstName<<std::endl;
    std::cout<<"the last name is : "<<lastName<<std::endl;
    std::cout<<"the nick name is : "<<nickName<<std::endl;
    std::cout<<"the phone number is : "<<number<<std::endl;
}

void    Contact::setter(int i)
{
    index = i;
}
