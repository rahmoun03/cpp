/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 17:39:49 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/31 16:19:42 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP 
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <exception>

# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define YOLLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define DEF "\033[0m"


class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
        RobotomyRequestForm();

    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &other);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
        ~RobotomyRequestForm();
        void    execute(Bureaucrat const &executor) const;
        
};


#endif
