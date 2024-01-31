#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    //std::cout << "Constructor Bureaucrat called" << std::endl;
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
    //std::cout << "Destructor Bureaucrat called" << std::endl;
    return;
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy)
{
    //std::cout << "Constructor copy Bureaucrat called" << std::endl;
    *this = copy;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& copy)
{
    if (this != &copy)
    {
        _name = copy._name;
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

std::ostream &operator<<(std::ostream &ostream, Bureaucrat const &value)
{
    ostream << value.getName() << ",grade bureaucrat " << value.getGrade() << ".";
    return (ostream);
}