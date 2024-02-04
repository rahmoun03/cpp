/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:54:50 by arahmoun          #+#    #+#             */
/*   Updated: 2024/02/04 20:56:02 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <deque>
#include <exception>
#define GRAY "\033[30m"
#define GREEN "\033[32m"
#define DEF "\033[0m"

class RPN
{
    private:
        std::string text;
        std::deque<int > stk;
        
        bool is_number(std::string str);
        RPN();
        RPN(const RPN &other);
        RPN &operator=(const RPN &other);
        
    public:
        RPN(const char *arg);
        ~RPN();
        void calc( void );
        class badInput : public std::exception
        {
            private :
                std::string msg;
            public:
                badInput(std::string message);
                const char *what() const _NOEXCEPT;
                ~badInput() _NOEXCEPT;
        };
};

#endif
