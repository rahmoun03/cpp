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

void    Contact::setAdd(){
    add("please enter the first name : ", firstName);
    add("please enter the last name : ", lastName);
    add("please enter nickname name : ", nickName);
    add("please enter phone number : ", number);
    add("please enter darkest secret : ", secret);
}

void    Contact::add(std::string text, std::string& var)
{
    std::cout<<GREEN<<text << DEF;
    std::getline(std::cin, var, '\n');
    for (size_t i = 0; i < var.length(); i++)
    {
        if (var[i] < 32 || var[i] > 126)
        {
            add(text, var);
            break;
        }
    }
    if (!var.length())
        add(text, var);
    
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
    std::cout<<"the darkest secret is : "<<secret<<std::endl;
}

void    Contact::setter(int i)
{
    index = i;
}
