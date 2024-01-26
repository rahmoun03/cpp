/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:05:09 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/26 19:05:45 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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

	for(size_t i = 19; data[i] ; ++i)
	{
		map_data[data.substr(i, 10)] = std::atof(data.substr(i+11,  data.find('\n', i) - (i + 11)).c_str());
		i = data.find('\n', i);
	}

    /*                   print the map container                   */
    // std::map<std::string, float>::iterator it = map_data.begin();
    // std::map<std::string, float>::iterator ite = map_data.find("2009-03-15");
	// for (; it != ite; ++it)
	// {
	// 	std::cout << it->first << " " << it->second << std::endl;
	// }
	// std::cout << "BitcoinExchange constructor called !" << std::endl;
    /*****************************************************************/
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

void BitcoinExchange::check_year(size_t &i)
{
    std::string dst;
    int         di(0);

    dst = inputFile.substr(i, 4);
    for (size_t j = 0; dst[j]; j++)
    {
        if(!isdigit(dst[j]))
            throw (WrongFile("file syntax is wrong in year !"));
    }
    di = std::atoi(dst.c_str());
    if(di > 2024 || di < 2009)
        throw(WrongFile("date is out of range !"));
    
}
void BitcoinExchange::check_month(size_t &i)
{
    std::string dst;
    int         di(0);

    dst = inputFile.substr(i + 5, 2);
    for (size_t j = 0; dst[j]; j++)
    {
        if(!isdigit(dst[j]))
            throw (WrongFile("file syntax is wrong in month!"));
    }
    di = std::atoi(dst.c_str());
    if(di > 12 || di < 1)
        throw(WrongFile("date is out of range in month !"));
}

std::string BitcoinExchange::check_day(size_t &i)
{
    std::string dst;
    int         di(0);

    dst = inputFile.substr(i + 8, 2);
    for (size_t j = 0; dst[j]; j++)
    {
        if(!isdigit(dst[j]))
            throw (WrongFile("file syntax is wrong in day !"));
    }
    di = std::atoi(dst.c_str());
    if(di > 30 || di < 1)
        throw(WrongFile("date is out of range in day !"));
 
    return (inputFile.substr(i, 10));
}

float BitcoinExchange::check_value(size_t &i)
{
    std::string dst;
    float         di(0);
    size_t       end;

    end = inputFile.find('\n', i);
    if(end > inputFile.size() || !end)
        end = inputFile.size();
    dst = inputFile.substr(i + 13, end - (i + 13));
    for (size_t j = 0; dst[j]; j++)
    {
        if(!isdigit(dst[j]) && dst[j] != '.')
            throw (WrongFile("file syntax is wrong in value !"));
    }
    di = std::atof(dst.c_str());
    if(di > 1000 || di < 0)
        throw(WrongFile("value is out of range !"));

    return (di);
}


void	BitcoinExchange::parsInput(void)
{
    //                 year-month-day | value 
    std::map<std::string , float> map_input;
    
    for (size_t i = 13; i < inputFile.size() ; ++i)
    {
        try
        {
            if(inputFile[i+4] != '-' || inputFile[i+7] != '-'
                || inputFile[i+10] != ' ' || inputFile[i+11] != '|'
                || inputFile[i+12] != ' ')
            {
                throw(WrongFile("file syntax is wrong !"));
            }
            this->check_year(i);
            this->check_month(i);
            std::cout << this->check_day(i) << " => ";
            std::cout << this->check_value(i) << " = ";
            std::cout << map_data[this->check_day(i)] * this->check_value(i) << std::endl;
            
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        i = inputFile.find('\n', i);
        if(!i || i > inputFile.size())
            i = inputFile.size();
    }

    // for ()
    // {
    //     /* code */
    // }
    
    std::cout << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
}

