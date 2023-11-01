/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:38:50 by arahmoun          #+#    #+#             */
/*   Updated: 2023/11/01 13:32:06 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {//                                                 def constructor
    std::cout << "Default constructor called" <<std::endl;
    value = 0;
}

Fixed::Fixed(const Fixed& other) {//                                copy constructor
    std::cout << "Copy constructor called" <<std::endl;
    *this = other;   
}

Fixed::Fixed(const int intValue){//                                   int constructor
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatValue){//                               float constructor
    std::cout << "Float constructor called" <<std::endl;
}

Fixed& Fixed::operator=(const Fixed& other){//                         assignment operator
    std::cout << "Copy assignment operator called" <<std::endl;
    if(this != &other){
        value = other.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" <<std::endl;

    return value;
}

void    Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" <<std::endl;

    value = raw;
}

float toFloat( void ) const{
    
}

int toInt( void ) const{
    
}

Fixed::~Fixed(){
    std::cout << "Destructor called" <<std::endl;
}

13.562