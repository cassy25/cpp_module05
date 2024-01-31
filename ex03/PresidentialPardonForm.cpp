#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm()
{

}
PresidentialPardonForm::PresidentialPardonForm(std::string const& target) : _target(target)
{

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

std::string PresidentialPardonForm::getName() const
{
    return (this->_target);
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