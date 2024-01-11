/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:04:21 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/10 23:18:31 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base()
{
    std::cout << GREEN << "the Base default constructor is caled" << DEF << std::endl;
}

Base::~Base()
{
    std::cout << RED << "the Base Destructor is caled"<<DEF << std::endl;
}
