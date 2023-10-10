/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:33:23 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/08 11:41:58 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(){
    i = -1;
    addPrompt = "ADD";
    searchPrompt = "SEARCH";
    exitPrompt = "EXIT";
}

void    PhoneBook::scan()
{
    std::cin>>prompt;
    if (prompt == addPrompt)
    {
        i++;
        contacts[i % 8].add();
        if (i < 8)
            count = i + 1;
        contacts[i % 8].setter(i % 8);
    }
    else if (prompt == searchPrompt)
    {
        std::cout<<"|------------- "<<YOLLOW<<"PHONBOOK CONTACTS"<<DEF<<" -----------|" << std::endl;
        std::cout<<"+----------+----------+----------+----------+"<<std::endl;
        std::cout<<"|"<<RED<<"index"<<DEF<<"     |"<<RED<<"first name"<<DEF<<"|"<<RED<<"last name"<<DEF<<" |"<<RED<<"nickname"<<DEF<<"  |"<<std::endl;
        std::cout<<"|----------+----------+----------+----------|"<<std::endl;
        if (i >= 0)
        {
            for (int j = 0; j < count; j++)
            {
                contacts[j % 8].print_contacts();
                if (j+1 < count)
                    std::cout<<"|----------+----------+----------+----------|"<<std::endl;
            }
        }
        else
            std::cout<<"|          |          |          |          |"<<std::endl;
        std::cout<<"+-------------------------------------------+"<<std::endl;
    }
    else if (prompt == exitPrompt)
    {
        std::exit(1);
    }
    else
        welcome();
}

void    PhoneBook::welcome() {
    std::cout << "--------------USAGE---------------" << std::endl;
    std::cout <<BLUE<<"ADD"<<DEF<<"\t: To add a contact." << std::endl;
    std::cout <<BLUE<<"SEARCH"<<DEF<<"\t: To search for a contact." << std::endl;
    std::cout <<BLUE<<"EXIT"<<DEF<<"\t: to quite the PhoneBook." << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << std::endl;
}
