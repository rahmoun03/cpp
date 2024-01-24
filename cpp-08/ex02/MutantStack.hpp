/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:34:09 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/23 15:43:27 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP 
#define MUTANTSTACK_HPP
#include <stack>
#include <deque>
#include <algorithm>
#include <iterator>
#include <iostream>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        MutantStack() ;
        MutantStack(const MutantStack<T, Container> &other);
        MutantStack<T, Container> &operator=(const MutantStack<T, Container> &other);
        ~MutantStack();
        
        // iterators
        typedef typename Container::iterator iterator;
        typedef typename Container::const_iterator const_iterator;
        typename Container::iterator begin() ;
        typename Container::iterator end() ;
        typename Container::const_iterator begin() const ;
        typename Container::const_iterator end() const ;
};

template <class T, class Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>()
{
    std::cout << "the default Constructor is called !" << std::endl;
}

template <class T, class Container>
MutantStack<T, Container>::MutantStack(const MutantStack<T, Container> &other) : std::stack<T, Container>(other)
{
    std::cout << "the Copy Constructor is called !" << std::endl;
    *this = other;
}

template <class T, class Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack<T, Container> &other)
{
    std::cout << "the Copy assignment operator is called !" << std::endl;
    if (this != &other)
        std::stack<T, Container>::operator=(other);
    return (*this);
}

template <class T, class Container>
MutantStack<T, Container>::~MutantStack()
{
    std::cout << "the default Destructor is called !" << std::endl;
}



// iterators

template <class T, class Container>
typename Container::iterator MutantStack<T, Container>::begin() 
{
    return this->c.begin();
}

template <class T, class Container>
typename Container::iterator MutantStack<T, Container>::end() 
{
    return this->c.end();
}

template <class T, class Container>
typename Container::const_iterator MutantStack<T, Container>::begin() const 
{
    return this->c.begin();
}

template <class T, class Container>
typename Container::const_iterator MutantStack<T, Container>::end() const 
{
    return this->c.end();
}

#endif 