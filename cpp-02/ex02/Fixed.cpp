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
    // std::cout << "Default constructor called" <<std::endl;
    value = 0;
}

Fixed::Fixed(const Fixed& other) {//                                copy constructor
    // std::cout << "Copy constructor called" <<std::endl;
    *this = other;   
}

Fixed::Fixed(const int intValue){//                                   int constructor
    // std::cout << "Int constructor called" << std::endl;
    value = intValue << fractionalBits;
}

Fixed::Fixed(const float floatValue){//                               float constructor
    // std::cout << "Float constructor called" <<std::endl;
    value = roundf(floatValue * (1 << fractionalBits));
}

Fixed& Fixed::operator=(const Fixed& other){//                         assignment operator
    // std::cout << "Copy assignment operator called" <<std::endl;
    if(this != &other){
        value = other.getRawBits();
    }
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &other)
{
    os << other.toFloat();
    return os;
}

int Fixed::getRawBits(void) const{
    // std::cout << "getRawBits member function called" <<std::endl;
    return value;
}

void    Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" <<std::endl;
    value = raw;
}

float Fixed::toFloat( void ) const{
    return (static_cast<float>(value) / (1 << fractionalBits)) ;
}

int Fixed::toInt( void ) const{
    return value / pow(2, fractionalBits);
}




const Fixed& Fixed::min(const Fixed& a, const Fixed& b){
    return (a.value < b.value) ? a : b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b){
    return (a.value < b.value) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b){
    return (a.value > b.value) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
    return (a.value > b.value) ? a : b;
}




Fixed::~Fixed(){
    // std::cout << "Destructor called" <<std::endl;
}
