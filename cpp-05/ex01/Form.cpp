/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 02:45:47 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/13 04:09:30 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

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

// geters

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




std::ostream &operator<<(std::ostream &os, const Form &other)
{
    os << "Form: " << other.getName() << "\nSigned: " << (other.getSign() ? "Yes" : "No")
       << "\nGrade to sign: " << other.getGradeToSign() << "\nGrade to execute: " << other.getGradeToExecute();
    return os;
}

const char *Form::GradeTooLowException::what() const _NOEXCEPT
{
    return ("Exception : the number of grade too low !");
}

const char *Form::GradeTooHighException::what() const _NOEXCEPT
{
    return ("Exception : the number of grade is too high !");
}
