/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:33:25 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/08 11:42:42 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"



class PhoneBook
{
    private :
        std::string addPrompt;
        std::string searchPrompt;
        std::string exitPrompt;
        std::string prompt;
        std::string index;
        int count;
        int i;
        Contact contacts[8];

    public:
        PhoneBook();
        void    showContact();
        void    welcome();
        void    scan();

    
};


# endif
