/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:05:45 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/25 18:52:02 by arahmoun         ###   ########.fr       */
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
	std::ifstream dataBase("data.csv");
	if(!dataBase.is_open())
	{
		std::cout << "there is some error in data base file !" << std::endl;
		return 1;
	}
	std::ifstream file(argv[1]);
	if(!file.is_open())
	{
		std::cout << "there is some error in input file !" << std::endl;
		return 1;
	}

	std::string inputFile;
	getline(file, inputFile, '\0');

	std::string data;
	getline(dataBase, data, '\0');


	std::map<std::string, std::string> map_data;

	for(size_t i = 19; data[i] ; ++i)
	{
		map_data[data.substr(i, 10)] = data.substr(i+11,  data.find('\n', i) - (i + 11));
		i = data.find('\n', i);
	}

	
	
	
	
	
	
	
	
	for (auto it : map_data)
	{
		std::cout << it.first << " " << it.second << std::endl;
	}
	

	return 0;
}
