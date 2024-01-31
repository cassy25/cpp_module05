#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <cstdlib>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    public:
        AForm();
        AForm(std::string const name, int grade, int gradeExec);
        virtual ~AForm();
        AForm(AForm const& copy);
        AForm& operator=(AForm const& copy);
        std::string getName() const;
        int getGrade() const;
        int getGradeExec() const;
        bool getSign() const;
        bool beSigned(Bureaucrat &bureaucrat);
        virtual void execute(Bureaucrat const& executor) const = 0;
        class gradeTooHighException : public std::exception
        {
            virtual const char* what() const throw()
            {    
                return "Grade Form too high (<1)";
            }
        };

        class gradeTooLowException : public std::exception
        {
            virtual const char* what() const throw()
            {
                return "Grade Form too low (>150)";
            }
        };
    protected:
        std::string _name;
        bool sign;
        int _grade;
        int _gradeExec;
};
std::ostream &operator<<(std::ostream &ostream, AForm const &value);

#endif