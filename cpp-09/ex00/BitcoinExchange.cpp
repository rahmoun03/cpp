/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:05:09 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/28 11:35:10 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
/*------------------------- exception drived class -------------------------------*/
BitcoinExchange::WrongFile::WrongFile(std::string s)
{
	msg_ = s;
}
BitcoinExchange::WrongFile::WrongFile()
{
	
}
BitcoinExchange::WrongFile::~WrongFile() _NOEXCEPT
{
	
}
const char *BitcoinExchange::WrongFile::what() const _NOEXCEPT
{
	return (msg_.c_str());
}
/*---------------------------  class rules  ---------------------------------------*/
BitcoinExchange::BitcoinExchange()
{
}
BitcoinExchange::BitcoinExchange(const char *str)
{
	std::ifstream dataBase("data.csv");
	if(!dataBase.is_open())
	{
		throw(WrongFile("there is some error in data base file !"));
	}
	std::ifstream file(str);
	if(!file.is_open())
	{
		throw(WrongFile("there is some error in input file !"));
	}
	getline(file, inputFile, '\0');
	getline(dataBase, data, '\0');
	if(inputFile.empty() || data.empty())
		throw(WrongFile("empty file !"));
	if (inputFile.substr(0, inputFile.find('\n', 0)) != "date | value")
		throw(WrongFile("bad file !"));
	if (inputFile.find('\n', 0) >= inputFile.size() - 1)
		throw(WrongFile("no data !"));
	for(size_t i = 19; data[i] ; ++i)
	{
		map_data[data.substr(i, 10)] = std::atof(data.substr(i+11,  data.find('\n', i) - (i + 11)).c_str());
		i = data.find('\n', i);
	}
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	*this = other;
}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
	{
		map_data.clear();
		std::map<std::string, float>::const_iterator it = other.map_data.begin();
		for (;it != other.map_data.end(); it++)
			map_data[it->first] = it->second;
		data = other.data;
		inputFile = other.inputFile;
	}
	return (*this);
}
BitcoinExchange::~BitcoinExchange()
{
}

/*-----------------------       checkers     --------------------------------------*/

void    BitcoinExchange::check_forma(size_t &i, size_t &end)
{
	if(inputFile[i+4] != '-' || inputFile[i+7] != '-'
	|| inputFile[i+10] != ' ' || inputFile[i+11] != '|'
	|| inputFile[i+12] != ' ' || inputFile[i+13] == ' '
	|| inputFile[i+13] == '\n' || inputFile[i+13] == '\t')
	{
		throw(WrongFile("Error: bad input => " + inputFile.substr(i, end - i)));
	}
}
void    BitcoinExchange::check_year(size_t &i, size_t &end)
{
	std::string dst;
	int         di(0);

	dst = inputFile.substr(i, 4);
	for (size_t j = 0; dst[j]; j++)
	{
		if(!isdigit(dst[j]))
			throw(WrongFile("Error: bad input => " + inputFile.substr(i, end - i)));
	}
	di = std::atoi(dst.c_str());
	if(di > 2024 || di < 2009)
		throw(WrongFile("Error: date is out of range in year !"));
	
}
void    BitcoinExchange::check_month(size_t &i, size_t &end)
{
	std::string dst;
	int         di(0);

	dst = inputFile.substr(i + 5, 2);
	for (size_t j = 0; dst[j]; j++)
	{
		if(!isdigit(dst[j]))
			throw(WrongFile("Error: bad input => " + inputFile.substr(i, end - i)));
	}
	di = std::atoi(dst.c_str());
	if(di > 12 || di < 1)
		throw(WrongFile("Error: date is out of range in month !"));
}
std::string BitcoinExchange::check_day(size_t &i, size_t &end)
{
	std::string dst;
	int         di(0);

	dst = inputFile.substr(i + 8, 2);
	for (size_t j = 0; dst[j]; j++)
	{
		if(!isdigit(dst[j]))
			throw(WrongFile("Error: bad input => " + inputFile.substr(i, end - i)));
	}
	di = std::atoi(dst.c_str());
	if(std::atoi(inputFile.substr(i + 5, 2).c_str()) == 2)
	{
		if((!std::atoi(inputFile.substr(i, 4).c_str()) % 4) && (di > 29 || di < 1))
			throw(WrongFile("Error: date is out of range in day !"));
		if((std::atoi(inputFile.substr(i, 4).c_str()) % 4) && (di > 28 || di < 1))
			throw(WrongFile("Error: date is out of range in day !"));
	}
	if(di > 31 || di < 1)
		throw(WrongFile("Error: date is out of range in day !"));
 
	return (inputFile.substr(i, 10));
}
void    BitcoinExchange::check_number(std::string &dst, size_t &i, size_t &end)
{
	int dot = 0;
	if((!isdigit(dst[0]) && dst[0] != '-' && dst[0] != '+') || !isdigit(inputFile[end - 1]))
		throw(WrongFile("Error: bad input => " + inputFile.substr(i, end - i)));
	if((dst[0] == '-' || dst[0] == '+') && (dst[1] == '.'))
		throw(WrongFile("Error: bad input => " + inputFile.substr(i, end - i)));
	for (size_t j = 1; dst[j]; j++)
	{
		if(dst[j] == '.')
			dot++;
		if((!isdigit(dst[j]) && dst[j] != '.') || (dot > 1))   
			throw(WrongFile("Error: bad input => " + inputFile.substr(i, end - i)));
	}
}
float BitcoinExchange::check_value(size_t &i, size_t &end)
{
	std::string	dst;
	float		di(0);

	dst = inputFile.substr(i + 13, end - (i + 13));
	check_number(dst, i, end);
	di = std::atof(dst.c_str());
	if(di > 1000)
		throw(WrongFile("Error: too large a number."));
	if(di < 0)
		throw(WrongFile("Error: not a positive number."));

	return (di);
}
float BitcoinExchange::get_value(std::string &key)
{
	if(key < map_data.begin()->first || key > (--map_data.end())->first)
		throw(WrongFile("Error : date is out of range !"));
	if(!map_data.count(key))       
		return((map_data.lower_bound(key)->first > key ? (--map_data.lower_bound(key))->second : (map_data.lower_bound(key)->second ))); 
	return (map_data.find(key)->second);
}
/*---------------------------------------------------------------------------------*/
void	BitcoinExchange::parsInput(void)
{
	size_t end;
	for (size_t i = inputFile.find('\n') + 1; i < inputFile.size() ; ++i)
	{
		end = inputFile.find('\n', i);
		if(!end || end > inputFile.size())
			end = inputFile.size();
		try
		{
			this->check_forma(i, end);
			this->check_year(i, end);
			this->check_month(i, end);
			std::string date = this->check_day(i, end);
			float value = this->check_value(i, end);
			float amount = this->get_value(date) * value;
			std::cout << date << " => " << value << " = " 
			<< amount
			<< std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		i = end;
	}
}