/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:54:18 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/08 11:43:09 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <cstdlib>
#include <string>


# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define YOLLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define DEF "\033[0m"

class Contact
{
    private:
        int index;
        std::string firstName;
        std::string lastName;
        std::string number;
        std::string nickName;
        std::string secret;
        void    getter(std::string str);
        void    add(std::string text, std::string& var);
    public:
        Contact();
        void    setAdd();
        void    setter(int i);
        void    print_contacts();
        void    print_info();
};

#endif
