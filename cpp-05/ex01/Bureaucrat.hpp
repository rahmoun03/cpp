/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:28:45 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/31 16:21:05 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>


# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define YOLLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define DEF "\033[0m"

class Form;
class Bureaucrat
{
	private:
		const	std::string name;
		int		grade;
		Bureaucrat();

	public:
		Bureaucrat(std::string Name, int Grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat& operator=(const Bureaucrat &other);
		~Bureaucrat();
		
        int			getGrade() const;
        const std::string	getName() const;

		void		incrementGrade();
		void		decrementGrade();
		
		void	signForm(Form &form);
		
		// exception classes
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
std::ostream &operator<<(std::ostream &os, Bureaucrat &object);
#endif
