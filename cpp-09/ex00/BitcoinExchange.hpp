/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:02:25 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/26 18:35:22 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <list>
#include <exception>
#include <algorithm>
#include <iterator>
#define GRAY "\033[30m"
#define GREEN "\033[32m"
#define DEF "\033[0m"

class BitcoinExchange
{
    private:
        std::map<std::string, float> map_data;
        std::string data;
        std::string inputFile;

		void check_year(size_t &i);
		void check_month(size_t &i);
		std::string check_day(size_t &i);
		float check_value(size_t &i);
        BitcoinExchange();

    public:
        BitcoinExchange(const char *str);
        BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
        ~BitcoinExchange();

		void	parsInput(void);
		
        class WrongFile : public std::exception
        {
			private:
                std::string msg_;
            public:
                WrongFile();
                ~WrongFile() _NOEXCEPT;
                WrongFile(std::string s);
                const char *what() const _NOEXCEPT;
        };
};


#endif