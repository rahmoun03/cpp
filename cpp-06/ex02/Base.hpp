/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:36:33 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/10 23:25:27 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define DEF "\033[0m"


#include <cstdint>
#include <iostream>

class Base
{
    private:
    public:
        Base();
        virtual ~Base();
};


#endif