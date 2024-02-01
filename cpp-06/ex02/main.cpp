/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:50:28 by arahmoun          #+#    #+#             */
/*   Updated: 2024/02/01 10:12:59 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void){
    srand(time(NULL));
    int i = std::rand() % 3;
    switch (i)
    {
    case 0:
        return (dynamic_cast<Base *>(new A()));
        break;
    case 1:
        return (dynamic_cast<Base *>(new B()));
        break;
    case 2:
        return (dynamic_cast<Base *>(new C()));
        break;
    default:
        std::cout << "some error in random generator !" << std::endl;
        break;
    }
    return NULL;
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "A" << std::endl;
    } 
    else if (dynamic_cast<B*>(p)) {
        std::cout << "B" << std::endl;
    } 
    else if (dynamic_cast<C*>(p)) {
        std::cout << "C" << std::endl;
    } 
    else {
        std::cout << "*: Unknown type !" << std::endl;
    }
}


void identify(Base& p) {
    try
    {
        A a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            (void)dynamic_cast<B &>(p);
            std::cout << "B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                (void)dynamic_cast<C &>(p);
                std::cout << "C" << std::endl;
            }
            catch(const std::exception& e)
            {
                (void)e;
                std::cout << "&: Unknown type !" << std::endl;
            }
        }
    }
}

int main()
{
	Base *base = generate();

	identify(base);
	identify(*base);
    
	delete base;
	return (0);
}
