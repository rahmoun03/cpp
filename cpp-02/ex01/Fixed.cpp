/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:38:50 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/30 18:40:14 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" <<std::endl;
    value = 0;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" <<std::endl;
    *this = other;
    
}

Fixed& Fixed::operator=(const Fixed& other){
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

Fixed::~Fixed(){
    std::cout << "Destructor called" <<std::endl;
}

