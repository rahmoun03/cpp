#include "Fixed.hpp"

Fixed Fixed::operator+(const Fixed& other) const{
    return (Fixed(toFloat() + other.toFloat()));
}
Fixed Fixed::operator-(const Fixed& other) const{
    return (Fixed(toFloat() - other.toFloat()));
}
Fixed Fixed::operator*(const Fixed& other) const{
    return (Fixed(toFloat() * other.toFloat()));
}
Fixed Fixed::operator/(const Fixed& other) const{
    if (other.toInt() == 0)
    {
        std::cout << "Division by zero is not allowed." << std::endl;
        exit (1);
    }
    return (Fixed(toFloat() / other.toFloat()));
}



bool Fixed::operator>(const Fixed& other) const{
    return (toFloat() > other.toFloat());
}
bool Fixed::operator<(const Fixed& other) const{
    return (toFloat() < other.toFloat());
}
bool Fixed::operator>=(const Fixed& other) const{
    return (toFloat() >= other.toFloat());
}
bool Fixed::operator<=(const Fixed& other) const{
    return (toFloat() <= other.toFloat());
}
bool Fixed::operator==(const Fixed& other) const{
    return (toFloat() == other.toFloat());
}
bool Fixed::operator!=(const Fixed& other) const{
    return (toFloat() != other.toFloat());
}

Fixed& Fixed::operator++() {
    ++value;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    ++(*this);
    return temp;
}

Fixed& Fixed::operator--() {
    --value;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    --(*this);
    return temp;
}