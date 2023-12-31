/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:26:19 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/28 17:19:17 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("NULL"), gradeToSign(150), gradeToExec(150)
{
    std::cout << "The AForm Default Contructor Called !" << std::endl;
}

AForm::AForm(const std::string Name, int GradeToSign, int GradeToExecute)
    : name(Name), gradeToSign(GradeToSign), gradeToExec(GradeToExecute)
{
    std::cout << GREEN << "The AForm Contructor Called !" << DEF << std::endl;
}

AForm::AForm(const AForm &other)
    : name(other.name), gradeToSign(other.gradeToExec), gradeToExec(gradeToSign)
{
    std::cout << "The AForm Copy Constructor Called !" << std::endl;
    *this = other;
}

AForm& AForm::operator=(const AForm &other)
{
    std::cout << "The AForm Copy assignment operator called !" << std::endl; 
    if (this != &other)
        sign = other.sign;
    return (*this);
}

AForm::~AForm()
{
    std::cout << RED << "The AForm Destructor Called !" << DEF << std::endl;
}


void    AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= gradeToSign)
        sign = true;
    else
        throw(GradeTooLowException());
}

std::ostream &operator<<(std::ostream &os, const AForm &other)
{
    os << "Form: " << other.getName() << std::endl;
    os << "Signed: " << (other.getSign() ? "Yes" : "No") << std::endl; 
    os << "Grade to sign: " << other.getGradeToSign() << std::endl; 
    os << "Grade to execute: " << other.getGradeToExecute() << std::endl;
    return os;
}


/* ----------------  exception classes ---------------------------  */
const char *AForm::GradeTooLowException::what() const _NOEXCEPT
{
    return ("the grade is too low !");
}

const char *AForm::GradeTooHighException::what() const _NOEXCEPT
{
    return ("the grade is too high !");
}

const char *AForm::NotSignedException::what() const _NOEXCEPT
{
    return ("form not signed !");
}

/* ---------------------------   geters   ------------------------------*/

bool AForm::getSign() const
{
    return sign;
}
std::string AForm::getName() const
{
    return (name);
}
int AForm::getGradeToSign() const
{
    return (gradeToSign);
}
int AForm::getGradeToExecute() const
{
    return (gradeToExec);
}
