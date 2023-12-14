/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:28:28 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/14 05:30:51 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


int main() {
    try {
        Bureaucrat bob("Bob", 5);
        Form contract("Contract", 4, 3);

        bob.signForm(contract); // Bob tries to sign the contract

        Bureaucrat alice("Alice", 2);
        alice.signForm(contract); // Alice tries to sign the contract

    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}