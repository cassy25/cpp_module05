#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const& copy);
        Bureaucrat& operator=(Bureaucrat const& copy);
        std::string getName() const;
        int getGrade() const;
        void upGrade();
        void lowerGrade();
        void signForm(AForm &form);
        void executeForm(AForm const& form);
        class gradeTooHighException : public std::exception
        {
            virtual const char* what() const throw()
            {    
                return "Grade too high (<1)";
            }
        };

        class gradeTooLowException : public std::exception
        {
            virtual const char* what() const throw()
            {
                return "Grade too low (>150)";
            }
        };
    protected:
        std::string _name;
        int _grade;
};
std::ostream &operator<<(std::ostream &ostream, Bureaucrat const &value);

#endif