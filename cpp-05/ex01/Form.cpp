/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 02:45:47 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/28 17:15:48 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("NULL"), gradeToSign(150), gradeToExec(150)
{
    std::cout << "The Form Default Contructor Called !" << std::endl;
}

Form::Form(const std::string Name, int GradeToSign, int GradeToExecute)
    : name(Name), gradeToSign(GradeToSign), gradeToExec(GradeToExecute)
{
    std::cout << "The Form Contructor Called !" << std::endl;
}

Form::Form(const Form &other)
    : name(other.name), gradeToSign(other.gradeToExec), gradeToExec(gradeToSign)
{
    std::cout << "The Form Copy Constructor Called !" << std::endl;
    *this = other;
}

Form& Form::operator=(const Form &other)
{
    std::cout << "The Form Copy assignment operator called !" << std::endl; 
    if (this != &other)
        sign = other.sign;
    return (*this);
}

Form::~Form()
{
    std::cout << "The Form Destructor Called !" << std::endl;
}


void    Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= gradeToSign)
        sign = true;
    else
        throw(GradeTooLowException());
}

std::ostream &operator<<(std::ostream &os, const Form &other)
{
    os << "AForm: " << other.getName() << std::endl;
    os << "Signed: " << (other.getSign() ? "Yes" : "No") << std::endl; 
    os << "Grade to sign: " << other.getGradeToSign() << std::endl; 
    os << "Grade to execute: " << other.getGradeToExecute() << std::endl;
    return os;
}


/* ----------------  exception classes ---------------------------  */
const char *Form::GradeTooLowException::what() const _NOEXCEPT
{
    return ("Exception Form : the number of grade too low !");
}

const char *Form::GradeTooHighException::what() const _NOEXCEPT
{
    return ("Exception Form : the number of grade is too high !");
}

/* ---------------------------   geters   ------------------------------*/

bool Form::getSign() const
{
    return sign;
}
std::string Form::getName() const
{
    return (name);
}
int Form::getGradeToSign() const
{
    return (gradeToSign);
}
int Form::getGradeToExecute() const
{
    return (gradeToExec);
}
