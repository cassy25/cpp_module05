#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        std::cout << std::endl;
        std::cout << "------TEST 1------" << std::endl;
        std::cout << "------Grade bureaucrat 100------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Ben", 100);
        std::cout << bureaucrat << std::endl;
        ShrubberyCreationForm shrubbery;
        RobotomyRequestForm robotomy;
        PresidentialPardonForm presidential;

        bureaucrat.executeForm(shrubbery);
        bureaucrat.executeForm(robotomy);
        bureaucrat.executeForm(presidential);
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl << std::endl;
    }

    try
    {
        std::cout << std::endl;
        std::cout << "------TEST 2------" << std::endl;
        std::cout << "------Grade bureaucrat 45------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Ben", 45) ;
        std::cout << bureaucrat << std::endl;
        ShrubberyCreationForm shrubbery;
        RobotomyRequestForm robotomy;
        PresidentialPardonForm presidential;

        bureaucrat.executeForm(shrubbery);
        bureaucrat.executeForm(robotomy);
        bureaucrat.executeForm(presidential);
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl << std::endl;
    }
    try
    {
        std::cout << std::endl;
        std::cout << "------TEST 3------" << std::endl;
        std::cout << "------Grade bureaucrat 5------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Ben", 5);
        std::cout << bureaucrat << std::endl;
        ShrubberyCreationForm shrubbery;
        RobotomyRequestForm robotomy;
        PresidentialPardonForm presidential;

        bureaucrat.executeForm(shrubbery);
        bureaucrat.executeForm(robotomy);
        bureaucrat.executeForm(presidential);
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl << std::endl;
    }
    return (0);
}
