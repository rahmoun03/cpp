/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceContent.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:20:29 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/18 12:35:59 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replaceContent.hpp"

replaceContent::replaceContent(const std::string& filename, const std::string& str1, const std::string& str2)
	: fileName(filename), s1(str1), s2(str2) {}

replaceContent::~replaceContent(){}

void replaceContent::replace() {

	std::ifstream input(fileName);
	if (!input.is_open()) {
		std::cerr << "Error: Could not open the input file." << std::endl;
		return;
	}

	std::ofstream output(fileName + ".replace");
	if (!output.is_open()) {
		std::cerr << "Error: Could not create the output file." << std::endl;
		return;
	}
	
	std::string buf;
	std::string modified;
	size_t index = 0;
	size_t pos = 0;
	getline(input, buf, '\0');
	while (1)
	{
		index = buf.find(s1, pos);
		if (index == std::string::npos || index >= buf.length())
		{
			modified += buf.substr(pos);
			break;
		}
		modified += buf.substr(pos, index - pos);
		modified += s2;
		pos = index + s1.length();
	}
	output << modified;
}
