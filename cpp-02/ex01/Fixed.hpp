/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:38:52 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/30 18:39:33 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        static const int fractionalBits = 8;
        int value;
    public:
        Fixed(); // default constructor
        Fixed(const Fixed& other); // copy constructor
        Fixed& operator=(const Fixed& other); //copy assignment operator
        ~Fixed(); //destructor
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif
