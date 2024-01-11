/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:50:28 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/10 23:23:56 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void){
    std::cout << "the generate is caled" << std::endl;
    srand(time(NULL));
    int i = std::rand() % 3;
    std::cout << i << std::endl;
    switch (i)
    {
    case 0:
        std::cout << "make A" << std::endl;
        return (dynamic_cast<Base *>(new A()));
        break;
    case 1:
        std::cout << "make B" << std::endl;
        return (dynamic_cast<Base *>(new B()));
        break;
    case 2:
        std::cout << "make C" << std::endl;
        return (dynamic_cast<Base *>(new C()));
        break;
    default:
        std::cout << "some error in random generator !" << std::endl;
        break;
    }
    return NULL;
}


int main()
{
    
    // Base *a = generate();
    // Base *c = new C();

    B *b = new B();
    Base *base = dynamic_cast<Base *>(b);

    // delete b;
    delete base;

    // delete a;
    // delete c;
}
