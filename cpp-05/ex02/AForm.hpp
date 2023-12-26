/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:44:14 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/26 12:45:47 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM_HPP 
# define AFORM_HPP


# include <exception>
# include <iostream>


class Bureaucrat;
class AForm
{
    private:
        const       std::string name;
        bool        sign;
        const int   gradeToSign;
        const int   gradeToExec;
    public:
        AForm();
        AForm(const std::string Name, int GradeToSign, int GradeToExecute);
        AForm(const AForm &other);
        AForm& operator=(const AForm &other);
        ~AForm();

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

std::ostream &operator<<(std::ostream os, const AForm &other);

#endif
