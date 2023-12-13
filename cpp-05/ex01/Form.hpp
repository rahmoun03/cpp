/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 01:36:54 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/13 03:36:46 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP 
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
    private:
        const       std::string name;
        bool        sign;
        const int   gradeToSign;
        const int   gradeToExec;
    public:
        Form();
        Form(const std::string Name, int GradeToSign, int GradeToExecute);
        Form(const Form &other);
        Form& operator=(const Form &other);
        ~Form();

        class GradeTooHighException : public std::exception
        {
            const char *what() const __NOEXCEPT;
        };
        class GradeTooLowException : public std::exception
        {
            const char *what() const __NOEXCEPT;
        };
};

#endif
