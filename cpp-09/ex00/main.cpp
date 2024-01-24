/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:05:45 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/24 12:46:45 by arahmoun         ###   ########.fr       */
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
		std::cout << "you must enter a csv file for example :"<<
		GRAY<<"\n$> ./btc data.csv" << DEF<<
		GREEN <<"\n   ^~~~~~~~~~~~~~" << std::endl;
		return(1);
	}
	std::cout << "nice" << std::endl;
	std::ifstream file(argv[1]);
	if(!file)
	{
		std::cout << "there is some error in file !" << std::endl;
		return 1;
	}
	std::vector<char> dst;
	std::copy(std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>(), std::back_inserter(dst));
	std::copy(dst.begin(), dst.end()/*std::find_if(dst.begin(), dst.end(), vergule)*/, std::ostream_iterator<char>(std::cout));
	
	return 0;
}
