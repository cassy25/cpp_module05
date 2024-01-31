#include "AForm.hpp"

AForm::AForm()
{
    return;
}

AForm::AForm(std::string const name, int const grade, int gradeExec) : _name(name), _grade(grade), _gradeExec(gradeExec)
{
    sign = false;
    if (_grade > 150 || _gradeExec > 150)
        throw gradeTooLowException();
    else if (_grade < 1 || _gradeExec < 1)
        throw gradeTooHighException();
    return;
}

AForm::~AForm()
{
    return;
}

AForm::AForm(AForm const& copy)
{
    *this = copy;
}

AForm& AForm::operator=(AForm const& copy)
{
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_grade = copy._grade;
        this->_gradeExec = copy._gradeExec;
    }
    return (*this);
}

std::string AForm::getName() const
{
    return (this->_name);
}

int AForm::getGrade() const
{
    return (this->_grade);
}

int AForm::getGradeExec() const
{
    return (this->_gradeExec);
}

bool AForm::getSign() const
{
    return (this->sign);
}

bool AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (_grade >= bureaucrat.getGrade())
    {
        sign = true;
        return (sign);
    }
    else
    {
        sign = false;
        return (sign);
        throw gradeTooLowException();
    }
}

std::ostream &operator<<(std::ostream &ostream, AForm const &value)
{
    ostream << "Formulaire " << value.getName() << " grade Sign " << value.getGrade() << " and grade execute " << value.getGradeExec() << std::endl;
    return (ostream);
}


