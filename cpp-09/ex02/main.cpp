/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:35:23 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/31 12:33:59 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <vector>

using namespace std;

typedef struct iter{
    int x;
}iterator;


typedef struct info{
    iterator it;
}INFO;



template <typename T>
void func(T a)
{
    typename T::it ap;
    ap.x = 5;
    cout << ap.x << endl;
}


int main(int argc, char const *argv[])
{
    INFO a;
    func(a);
    return 0;
}
