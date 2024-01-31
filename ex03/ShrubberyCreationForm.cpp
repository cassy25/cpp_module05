#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) : _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copy)
{
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& copy)
{
    if (this != &copy)
    {
        this->_target = copy._target;
    }
    return (*this);
}

std::string ShrubberyCreationForm::getName() const
{
    return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > 145)
        std::cerr << "Grade Bureaucrat is too low for sign and execute" << std::endl;
    else if (executor.getGrade() > 137 && executor.getGrade() < 145)
        std::cerr << "Grade Bureaucrat is too low for execute" << std::endl;
    else
    {
        std::cout << "Bureaucrat can sign and execute" << std::endl;
        std::string file = _target + "_shrubbery";
        std::ofstream file1(file.c_str());
        if (file1)
        {
            file1 << "     /\\\\     " << std::endl;
            file1 << "    /  \\\\    " << std::endl;
            file1 << "   /    \\\\   " << std::endl;
            file1 << "  /      \\\\  " << std::endl;
            file1 << " /        \\\\ " << std::endl;
            file1 << " ---| |----  " << std::endl;
        }
        std::cout << "ASCII trees in " << file << std::endl;
    }
}