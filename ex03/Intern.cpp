#include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(Intern const& copy)
{
    *this = copy;
}

Intern& Intern::operator=(Intern const& copy)
{
    (void) copy;
    return (*this);
}

AForm* Intern::makeForm(std::string const& form, std::string const& target)
{
    AForm *aform;
    aform = NULL;
            switch(checkNameForm(form))
            {
                case 0:
                    std::cerr << "Error: Form does not exist" << std::endl;
                    delete aform;
                    break;
                case 1:
                    std::cout << "Intern create " << form << std::endl;
                    aform = new PresidentialPardonForm(target);
                    break;
                case 2:
                   std::cout << "Intern create " << form << std::endl;
                   aform = new RobotomyRequestForm(target);
                   break;
                case 3:
                   std::cout << "Intern create " << form << std::endl;
                   aform = new ShrubberyCreationForm(target);
                   break;
                default:
                    break;
            }

    return (aform);
}

int Intern::checkNameForm(std::string const& form)
{
    if (form == "presidential pardon")
        return (1);
    if (form == "robotomy request")
        return (2);
    if (form == "shrubbery creation")
        return (3);
    return (0);
}

