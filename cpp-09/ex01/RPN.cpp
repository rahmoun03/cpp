/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 13:58:30 by arahmoun          #+#    #+#             */
/*   Updated: 2024/02/05 13:22:49 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::badInput::badInput(std::string message) : msg(message)
{
}
const char *RPN::badInput::what() const _NOEXCEPT
{
	return (msg.c_str());
}
RPN::badInput::~badInput() _NOEXCEPT
{
}
RPN::RPN()
{
}
RPN::RPN(const RPN &other)
{
	*this = other;
}
RPN &RPN::operator=(const RPN &other)
{
	if(this != &other)
	{
		text = other.text;
		stk = other.stk;
	}
    return (*this);
}
bool RPN::is_number(std::string str)
{
	for (size_t i = 0; str[i]; i++)
	{
		if(str.length() > 1 && !isdigit(str[i]) && str[i] != '-')
			return (false);
		else if(str.length() == 1 && !isdigit(str[i]))
			return (false);
	}
	return (true);
}
RPN::RPN(const char *arg) : text(arg)
{
	if(text.empty())
		throw(badInput("Error : bad input"));
	for (size_t i = 0; text[i]; i++)
	{
		if(!isdigit(text[i]) && text[i] != '-' && text[i] != '+'
			&& text[i] != '*' && text[i] != '/' && text[i] != ' ')
			throw(badInput("Error : bad input"));
	}
}
void RPN::calc( void )
{
	std::stringstream strs(text.c_str());
	std::string p_of_op;
	int result(0);
	while(strs >> p_of_op)
	{
		if (p_of_op.size() > 1 && !is_number(p_of_op))
			throw(badInput("Error : bad input"));
		if(is_number(p_of_op))
		{
			if (std::atoi(p_of_op.c_str()) > 10)
				throw(badInput("Error : bad input"));
			stk.push_back(std::atoi(p_of_op.c_str()));
		}
		else if (stk.size() >= 2 && p_of_op.size() == 1)
		{
			if(p_of_op == "+")
			{
				result = (*(stk.end() - 2)) + stk.back();
				stk.pop_back();
				stk.pop_back();
				stk.push_back(result);
			}
			else if(p_of_op == "-")
			{
				result = (*(stk.end() - 2)) - stk.back();
				stk.pop_back();
				stk.pop_back();
				stk.push_back(result);
			}
			else if(p_of_op == "*")
			{
				result = (*(stk.end() - 2)) * (stk.back());
				stk.pop_back();
				stk.pop_back();
				stk.push_back(result);
			}
			else if(p_of_op == "/")
			{
				if (stk.back() == 0)
					throw(badInput("Error : bad input"));
				result = (*(stk.end() - 2)) / stk.back();
				stk.pop_back();
				stk.pop_back();
				stk.push_back(result);
			}
		}
		else
			throw(badInput("Error : bad input"));
		p_of_op.clear();
	}
	if(stk.size() != 1)
		throw(badInput("Error : bad input"));
	std::cout << stk.back() << std::endl;
}
RPN::~RPN()
{
}
