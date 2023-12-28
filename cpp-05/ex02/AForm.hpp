/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:25:36 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/28 17:18:16 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM_HPP 
# define AFORM_HPP


# include <exception>
# include <iostream>

# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define YOLLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define DEF "\033[0m"

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
        virtual ~AForm();

        bool getSign() const;
        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void    beSigned(const Bureaucrat &bureaucrat);
        virtual void    execute(Bureaucrat const &executor) const = 0;

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
        class NotSignedException : public std::exception {
            public:
                const char* what() const  _NOEXCEPT;
    };
};

std::ostream &operator<<(std::ostream &os, const AForm &other);

#endif
