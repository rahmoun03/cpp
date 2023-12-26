/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:38:52 by arahmoun          #+#    #+#             */
/*   Updated: 2023/11/01 13:12:31 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed
{
    private:
        static const int fractionalBits = 8;
        int value;
    public:
        Fixed(); // default constructor
        Fixed(const Fixed& other); // copy constructor
        Fixed(const int intValue); // A constructor that takes a constant integer as a parameter
        Fixed(const float floatValue); // • A constructor that takes a constant floating-point number as a parameter.
        Fixed& operator=(const Fixed& other); //copy assignment operator
        ~Fixed(); //destructor
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat( void ) const;
        int     toInt( void ) const;
};


std::ostream& operator<<(std::ostream& os, const Fixed& other); //copy assignment operator

#endif
