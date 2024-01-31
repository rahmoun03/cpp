/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:02:25 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/28 15:27:51 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
#include <iostream>
#include <fstream>
#include <map>
#include <exception>
#define GRAY "\033[30m"
#define GREEN "\033[32m"
#define DEF "\033[0m"

class BitcoinExchange
{
	private:
		std::map<std::string, float> map_data;
		std::string data;
		std::string inputFile;

		void    	check_year(size_t &i, size_t &end);
		void 		check_month(size_t &i, size_t &end);
		void 		check_forma(size_t &i, size_t &end);
		std::string	check_day(size_t &i, size_t &end);
		float 		check_value(size_t &i, size_t &end);
		void    	check_number(std::string &dst, size_t &i, size_t &end);
		float 		get_value(std::string &key);
		
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);

	public:
		BitcoinExchange(const char *str);
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