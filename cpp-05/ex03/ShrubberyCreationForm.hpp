/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:49:04 by arahmoun          #+#    #+#             */
/*   Updated: 2023/12/31 16:19:24 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <exception>

# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define YOLLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define DEF "\033[0m"

class ShrubberyCreationForm : public AForm
{
private:
    std::string target;
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);
    ~ShrubberyCreationForm();

    void    execute(Bureaucrat const &executor) const;

};
