#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm()
{
    _target = "RubenPardon";
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& copy)
{
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& copy)
{
    if (this != &copy)
    {
        _target = copy._target;
    }
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > 25)
        std::cerr << "Grade Bureaucrat is too low for sign" << std::endl;
    else if (executor.getGrade() > 5 && executor.getGrade() < 25)
        std::cerr << "Grade Bureaucrat is too low for execute" << std::endl;
    else
        std::cout << _target << "has been pardonned by Zaphod Beeblebrox." << std::endl;
}