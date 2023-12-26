/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:53:15 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/26 12:53:16 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FORM_HPP 
# define FORM_HPP


# include <exception>
# include <iostream>


class Bureaucrat;
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

        bool getSign() const;
        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void    beSigned(Bureaucrat &bureaucrat);

        class GradeTooHighException : public std::exception
        {
            public :
                const char *what() const _NOEXCEPT;
        };
        class GradeTooLowException : public std::exception
        {
            public :
                const char *what() const _NOEXCEPT;
        };
};

std::ostream &operator<<(std::ostream os, const Form &other);

#endif
