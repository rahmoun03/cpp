/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:28:28 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/29 18:53:41 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main() {
    try {
        Bureaucrat bob("Bob", 45);
        AForm *sh = new ShrubberyCreationForm("TREE"); //grade to sign = 145, grade to exec = 137
        AForm *rb = new RobotomyRequestForm("ASTRO"); // grade to sign = 72, grade to exec = 45
        AForm *pp = new PresidentialPardonForm("PARDON"); // grade to sign = 25, grade to exec = 5
        
        std::cout << "\n------------- ShrubberyCreationForm test ------------\n" << std::endl;
        
        bob.signForm(*sh); // try to signed the form
        bob.executeForm(*sh); // try to execute the form

        std::cout << "\n------------- RobotomyRequestForm test ------------\n" << std::endl;

        bob.signForm(*rb); // try to signed the form
        bob.executeForm(*rb); // try to execute the form
        
        std::cout << "\n------------- PresidentialPardonForm test ------------\n" << std::endl;

        bob.signForm(*pp); // try to signed the form
        bob.executeForm(*pp); // try to execute the form

        std::cout << "\n------------- forms info ------------\n"<< std::endl;
        
        std::cout << *sh << std::endl;
        std::cout << *rb << std::endl;
        std::cout << *pp << std::endl;
        
        std::cout << "-------------  free memory ------------------------ " << std::endl;
        delete sh;
        delete rb;
        delete pp;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}