/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 15:28:47 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/31 15:56:53 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"


class Intern
{
    private:
        
    public:
    Intern();
    ~Intern();
    Intern(const Intern &other);
    Intern &operator=(const Intern &other);

    AForm *makeForm(std::string formName, std::string target);
};


#endif