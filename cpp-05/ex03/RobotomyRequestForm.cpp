/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:01:23 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/31 16:17:57 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << GREEN << "The RobotomyRequestForm Default Constructor called !"<< DEF << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << GREEN << "The RobotomyRequestForm Constructor called !"<< DEF << std::endl;
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other)
{
    std::cout << "The RobotomyReequestForm copy constructor called !" << std::endl;
    this->target = other.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    std::cout << "The RobotomyReequestForm copy constructor called !" << std::endl;
    if(this != &other)
        this->target = other.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << RED << "The RobotomyRequestForm Destructor called !" << DEF << std::endl;
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const{
    if (this->getSign() == false)
        throw(NotSignedException());
    if (executor.getGrade() > this->getGradeToExecute())
        throw(GradeTooLowException());
        
    std::cout << YOLLOW << target << DEF <<" has been robotomized successfully 50\% of the time."  << std::endl;
}
