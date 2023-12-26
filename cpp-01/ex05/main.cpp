/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:05:09 by arahmoun          #+#    #+#             */
/*   Updated: 2023/10/18 16:05:13 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    // Test different complaint levels
    harl.complaint("DEBUG");
    harl.complaint("INFO");
    harl.complaint("WARNING");
    harl.complaint("ERROR");

    // Test an invalid complaint level
    harl.complaint("INVALID_LEVEL");

    return 0;
}