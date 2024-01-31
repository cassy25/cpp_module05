#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern : public Bureaucrat
{
    public:
        Intern();
        ~Intern();
        Intern(Intern const& copy);
        Intern& operator=(Intern const& copy);
        AForm *makeForm(std::string const& form, std::string const& target);
        int checkNameForm(std::string const& form);
    private:
        ShrubberyCreationForm shrubb;
        RobotomyRequestForm robotomy;
        PresidentialPardonForm pres;
};

#endif