/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:49:49 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/31 16:18:06 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << GREEN << "The PresidentialPardonForm Default Constructor called !"<< DEF << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << GREEN << "The PresidentialPardonForm Constructor called !"<< DEF << std::endl;
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other)
{
    std::cout << "The PresidentialPardonForm Copy Constructor called !"<< std::endl;
    this->target = other.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    std::cout << "The PresidentialPardonForm copy constructor called !" << std::endl;
    if(this != &other)
        this->target = other.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << RED << "The PresidentialPardonForm Destructor called !"<< DEF << std::endl;
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const{
    if (this->getSign() == false)
        throw(NotSignedException());
    if (executor.getGrade() > this->getGradeToExecute())
        throw(GradeTooLowException());
    std::cout << YOLLOW << this->target << DEF << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
