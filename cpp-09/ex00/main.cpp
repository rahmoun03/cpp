/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:05:45 by arahmoun          #+#    #+#             */
/*   Updated: 2024/02/05 13:00:30 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool vergule(char i)
{
	return (i == ',');
}

int main(int argc, char const *argv[])
{
	if(argc != 2)
	{
		std::cout << "you must enter a input file for example :"<<
		GRAY<<"\n$> ./btc input.txt" << DEF<<
		GREEN <<"\n   ^~~~~~~~~~~~~~~" << std::endl;
		return(1);
	}
	try
	{
		BitcoinExchange btc(argv[1]);
		btc.parsInput();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception : " << e.what() << '\n';
	}
	return 0;
}
