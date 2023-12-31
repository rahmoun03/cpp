/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 15:56:13 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/31 15:57:14 by arahmoun         ###   ########.fr       */
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

AForm *Intern::makeForm(std::string formName, std::string target) {
    if (formName == "robotomy request") {
        std::cout << "Intern creates " << formName << std::endl;
        return (new RobotomyRequestForm(target));
    }
    else if (formName == "presidential pardon") {
        std::cout << "Intern creates " << formName << std::endl;
        return (new PresidentialPardonForm(target));
    }
    else if (formName == "shrubbery creation") {
        std::cout << "Intern creates " << formName << std::endl;
        return (new ShrubberyCreationForm(target));
    }
    else {
        std::cout << "Error: Form name '" << formName << "' does not exist!" << std::endl;
        return nullptr;
    }
}
