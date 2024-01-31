#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        std::cout << std::endl;
        std::cout << "------TEST 1------" << std::endl;
        std::cout << "------Grade bureaucrat 100------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Ben", 100);
        std::cout << bureaucrat << std::endl;
        Intern intern;
        AForm *form;

        form = intern.makeForm("shrubbery creation", "Ben");
        bureaucrat.executeForm(*form);
        delete[] form;
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl << std::endl;
    }
    try
    {
        std::cout << std::endl;
        std::cout << "------TEST 2------" << std::endl;
        std::cout << "------Grade bureaucrat 45------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Ben", 45);
        std::cout << bureaucrat << std::endl;
        Intern intern;
        AForm *form;

        form = intern.makeForm("robotomy request", "Ben");
        bureaucrat.executeForm(*form);
        delete[] form;
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
        Intern intern;
        AForm *form;

        form = intern.makeForm("presidential pardon", "Ben");
        bureaucrat.executeForm(*form);
        delete[] form;
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl << std::endl;
    }
    try
    {
        std::cout << std::endl;
        std::cout << "------TEST 4------" << std::endl;
        std::cout << "------Grade bureaucrat 150------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Ben", 150);
        std::cout << bureaucrat << std::endl;
        Intern intern;
        AForm *form;

        form = intern.makeForm("presidential pardon", "Ben");
        bureaucrat.executeForm(*form);
        delete[] form;
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl << std::endl;
    }
    try
    {
        std::cout << std::endl;
        std::cout << "------TEST 5------" << std::endl;
        std::cout << "------Grade bureaucrat 150------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Ben", 150);
        std::cout << bureaucrat << std::endl;
        Intern intern;
        AForm *form;

        form = intern.makeForm("pardon", "Ben");
        delete[] form;
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl << std::endl;
    }
    return (0);
}
