/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:28:28 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/28 18:08:54 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


int main() {
    try {
        Bureaucrat bob("Bob", 45);
        AForm *sh = new ShrubberyCreationForm("target"); //grade to sign = 145, grade to exec = 137
        AForm *rb = new RobotomyRequestForm("Astro"); // grade to sign = 72, grade to exec = 45
        std::cout << "------------- ShrubberyCreationForm test ------------\n" << std::endl;
        
        bob.signForm(*sh); // try to signed the form
        bob.executeForm(*sh); // try to execute the form

        std::cout << "------------- RobotomyRequestForm test ------------\n" << std::endl;

        bob.signForm(*rb); // try to signed the form
        bob.executeForm(*rb); // try to execute the form

        std::cout << std::endl;
        
        std::cout << *sh << std::endl;
        std::cout << *rb << std::endl;
        
        std::cout << "-------------  free memory ------------------------ " << std::endl;
        delete sh;
        delete rb;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}