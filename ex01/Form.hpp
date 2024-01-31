#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
    public:
        Form();
        Form(std::string const name, int grade, int gradeExec);
        ~Form();
        Form(Form const& copy);
        Form& operator=(Form const& copy);
        std::string getName() const;
        int getGrade() const;
        int getGradeExec() const;
        bool getSign() const;
        bool beSigned(Bureaucrat &bureaucrat);
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
    private:
        std::string _name;
        bool sign;
        int _grade;
        int _gradeExec;
};
std::ostream &operator<<(std::ostream &ostream, Form const &value);

#endif