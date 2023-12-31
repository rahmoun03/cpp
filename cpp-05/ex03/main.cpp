/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:28:28 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/31 18:46:13 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main() {
    try {
        Intern someRandomIntern;
        Bureaucrat bob("ayoub", 21);
        AForm* rrf;

        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        if(rrf)
        {
            bob.signForm(*rrf);
            bob.executeForm(*rrf);
            delete rrf;
        }

        
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        if(rrf)
        {    
            bob.signForm(*rrf);
            bob.executeForm(*rrf);
            delete rrf;
        }

        rrf = someRandomIntern.makeForm("pesidential pardon", "Bender");
        if(rrf)
        {
            bob.signForm(*rrf);
            bob.executeForm(*rrf);
            delete rrf;
        }

        return 0;
    } 
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}