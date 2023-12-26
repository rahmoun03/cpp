/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:43:23 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/18 15:33:12 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replaceContent.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "you should enter 3 arguments : filename, str1, str2."<<std::endl;
		return (1);
	}
	else
	{
		replaceContent Content(av[1], av[2], av[3]);
		Content.replace();
	}
}