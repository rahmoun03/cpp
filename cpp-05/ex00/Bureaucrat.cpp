/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:33:26 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/14 04:58:32 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("null"), grade(150)
{
    std::cout << GREEN << "The Bureaucrat default constructor called !" << DEF << std::endl;
}

Bureaucrat::Bureaucrat(const std::string Name, int Grade) : name(Name)
{
    std::cout << GREEN << "The Bureaucrat constructor called !" << DEF << std::endl;
    if (Grade < 1)
        throw(GradeTooHighException());
    else if (Grade > 150)
        throw(GradeTooLowException());
    grade = Grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name)
{
    std::cout << "The Bureaucrat copy constructor called !" << std::endl;
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "The Bureaucrat copy assignment opertator called !" << std::endl;
    if (this != &other)
        grade = other.getGrade();
    return (*this);
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &object)
{
	os << object.getName() << " bureaucrat grade " << object.getGrade();
    return os;
}

void    Bureaucrat::incrementGrade()
{
    if (grade - 1 < 1)
        throw(GradeTooHighException());
    else
        grade--;    
}

void    Bureaucrat::decrementGrade()
{    
    if (grade + 1 > 150)
        throw(GradeTooLowException());
    else
        grade++;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

const std::string Bureaucrat::getName() const
{
    return name;
}


Bureaucrat::~Bureaucrat()
{
    std::cout << RED << "The Bureaucrat destructor called !"<< DEF << std::endl;   
}
// Exception funcs
const char *Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
    return ("Exception : the number of grade too low !");
}

const char *Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
    return ("Exception : the number of grade is too high !");
}