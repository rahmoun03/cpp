/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:49:49 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/29 18:50:08 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << GREEN << "The PresidentialPardonForm Default Constructor called !"<< DEF << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other){
    std::cout << "The PresidentialPardonForm Copy Constructor called !"<< std::endl;
    this->target = other.target;
    // *this = other;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    std::cout << GREEN << "The PresidentialPardonForm Constructor called !"<< DEF << std::endl;
    this->target = target;
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
