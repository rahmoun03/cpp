/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:44:20 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/26 12:45:11 by arahmoun         ###   ########.fr       */
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
    std::cout << "The AForm Contructor Called !" << std::endl;
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
    std::cout << "The AForm Destructor Called !" << std::endl;
}


void    AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= gradeToSign)
        sign = true;
    else
        throw(GradeTooLowException());
}

std::ostream &operator<<(std::ostream &os, const AForm &other)
{
    os << "AForm: " << other.getName() << "\nSigned: " << (other.getSign() ? "Yes" : "No")
       << "\nGrade to sign: " << other.getGradeToSign() << "\nGrade to execute: " << other.getGradeToExecute();
    return os;
}


/* ----------------  exception classes ---------------------------  */
const char *AForm::GradeTooLowException::what() const _NOEXCEPT
{
    return ("Exception AForm : the number of grade too low !");
}

const char *AForm::GradeTooHighException::what() const _NOEXCEPT
{
    return ("Exception AForm : the number of grade is too high !");
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
