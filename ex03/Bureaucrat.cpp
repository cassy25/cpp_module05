#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat()
{
    return;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
    if (_grade > 150)
        throw gradeTooLowException();
    else if (_grade < 1)
        throw gradeTooHighException();
    return;
}

Bureaucrat::~Bureaucrat()
{
    return;
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy)
{
    *this = copy;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& copy)
{
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_grade = copy._grade;
    }
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::upGrade()
{
    _grade -= 1;
    if (_grade < 1)
    {
        throw gradeTooHighException();
    }
}

void Bureaucrat::lowerGrade()
{
    _grade += 1;
    if (_grade > 150)
    {
        throw gradeTooLowException();
    }
}
void Bureaucrat::signForm(AForm &form)
{
    if (form.getSign() == true && form.getGradeExec() >= getGrade())
        std::cout << _name << " signed " << form.getName() << std::endl << std::endl;
    else if (form.getSign() == false && form.getGradeExec() >= getGrade())
        std::cout << _name << " couldn't sign " << form.getName() << " because Bureaucrat grade is too low for sign." << std::endl << std::endl;
    else if (form.getSign() == true && form.getGradeExec() < getGrade())
        std::cout << _name << " couldn't sign " << form.getName() << " because Bureaucrat grade is too low for execute." << std::endl << std::endl;
    else
        std::cout << _name << " couldn't sign " << form.getName() << " because Bureaucrat grade is too low for sign and execute." << std::endl << std::endl;
}

void Bureaucrat::executeForm(AForm const& form)
{
    form.execute(*this);
}


std::ostream &operator<<(std::ostream &ostream, Bureaucrat const &value)
{
    ostream << value.getName() << ", grade bureaucrat " << value.getGrade() << ".";
    return (ostream);
}