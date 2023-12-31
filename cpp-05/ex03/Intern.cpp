/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 15:56:13 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/31 18:34:43 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
    std::cout << GREEN << "The Intern Default Constructor called !" << DEF << std::endl;
}

Intern::~Intern() {
    std::cout << RED << "The Intern Destructor called !" << DEF << std::endl;
}

Intern::Intern(const Intern &other) {
    (void)other;
    std::cout << "The Intern Copy Constructor called !" << std::endl;
}

Intern &Intern::operator=(const Intern &other) {
    (void)other;
    std::cout << "The Intern Copy assignment operator called !" << std::endl;
    return *this;
}

AForm *presidential(std::string target)
{
    return (new PresidentialPardonForm(target));
}

AForm *robotomy(std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm *shrubbery(std::string target)
{
    return (new ShrubberyCreationForm(target)); 
}


AForm *Intern::makeForm(std::string formName, std::string target) {
    std::string forms[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    AForm *(*all_forms[])(std::string target) = {&robotomy, &presidential, &shrubbery};
    
    for (size_t i = 0; i < 3; i++)
    {
        if (formName == forms[i])
            return (all_forms[i](target));
    }
    std::cout << "Error: Form name '" << formName << "' does not exist!" << std::endl;
    return (NULL);
}
