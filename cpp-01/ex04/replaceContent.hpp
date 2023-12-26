/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceContent.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:13:54 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/16 17:35:22 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACECONTENT_HPP
#define REPLACECONTENT_HPP
#include <iostream>
#include <fstream>

class replaceContent
{
    private:
        std::string fileName;
        std::string s1;
        std::string s2;
    public:
        replaceContent(const std::string& filename, const std::string& str1, const std::string& str2);
        ~replaceContent();
        void replace();
};

#endif