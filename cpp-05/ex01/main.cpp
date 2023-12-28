/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:28:28 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/28 17:16:25 by arahmoun         ###   ########.fr       */
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

        std::cout << contract <<std::endl;

    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}