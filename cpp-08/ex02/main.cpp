/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:33:47 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/31 11:25:07 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


int main()
{
    {
        std::cout << "simple iterators : \n";
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
        // reverse iterator
    {
        std::cout << "reverse iterators : \n";
        MutantStack<std::string> mstack;
        mstack.push("ayoub");
        mstack.push("simo");
        mstack.pop();
        mstack.push("2");
        mstack.push("1337");
        mstack.push("school");
        //[...]
        mstack.push("network");
        MutantStack<std::string>::reverse_iterator it = mstack.rbegin();
        MutantStack<std::string>::reverse_iterator ite = mstack.rend();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    
    return 0;
}