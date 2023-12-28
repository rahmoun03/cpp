/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:28:28 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/28 17:21:24 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"


int main() {
    try {
        Bureaucrat bob("Bob", 140);
        AForm *sh = new ShrubberyCreationForm("target"); //grade to sign = 145, grade to exec = 137
        
        std::cout << std::endl;
        bob.signForm(*sh); // try to signed the form
        bob.executeForm(*sh); // try to execute the form

        std::cout << std::endl;
        
        std::cout << *sh << std::endl;
        std::cout << std::endl;
        
        delete sh;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}