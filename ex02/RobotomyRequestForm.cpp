#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm()
{
    _target = "BobRequest";
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy)
{
    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& copy)
{
    if (this != &copy)
    {
        this->_target = copy._target;
    }
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > 72)
        std::cerr << "Grade Bureaucrate is too low for sign" << std::endl;
    else if (executor.getGrade() > 45 && executor.getGrade() < 72)
        std::cerr << "Grade Bureaucrat is too low for execute" << std::endl;
    else
    {
        srand(time(NULL));
        if (std::rand() % 2 == 0)
            std::cout << _target << " was successfully robotized !" << std::endl;
        else
            std::cout << "Robotomy has failed" << std::endl;
    }
}