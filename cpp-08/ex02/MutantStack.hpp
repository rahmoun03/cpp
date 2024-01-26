/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:34:09 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/26 16:39:35 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP 
#define MUTANTSTACK_HPP
#include <stack>
#include <deque>
#include <queue>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

template <class T, class Container = std::deque<T > >
class MutantStack : public std::stack<T, Container>
{
        
    public:
        MutantStack();
        MutantStack(const MutantStack<T, Container> &other);
        MutantStack<T, Container> &operator=(const MutantStack<T, Container> &other);
        ~MutantStack();

        // iterators
        typedef typename Container::iterator        iterator;
        typedef typename Container::const_iterator  const_iterator;
        iterator begin();
        iterator end() ;
        const_iterator begin() const ;
        const_iterator end() const ;
};

template <class T, class Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>()
{
}

template <class T, class Container >
MutantStack<T, Container>::MutantStack(const MutantStack<T, Container> &other) : std::stack<T, Container>(other)
{
    *this = other;
}

template <class T, class Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack<T, Container> &other)
{
    if (this != &other)
        std::stack<T, Container>::operator=(other);
    return (*this);
}

template <class T, class Container>
MutantStack<T, Container>::~MutantStack()
{
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