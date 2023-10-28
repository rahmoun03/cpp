/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 00:40:06 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/28 15:33:18 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" <<std::endl;
}

Fixed::Fixed(const Fixed& other) : *this = other {
    std::cout << "Copy constructor called" <<std::endl;
    
}

Fixed operator=(const Fixed& other){
    std::cout << "Copy assignment operator called" <<std::endl;
    if(this != &other){
        
    }
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" <<std::endl;
}

