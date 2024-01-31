#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        std::cout << "------TEST 1------" << std::endl;
        std::cout << "------Grade Form Sign < 1------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Bob", 50);
        std::cout << bureaucrat << std::endl;
        Form form("Dossier1", 0, 56);
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl <<std::endl;
    }

    try
    {
        std::cout << "------TEST 2------" << std::endl;
        std::cout << "------Grade Form Sign > 150------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Sully", 149);
        std::cout << bureaucrat << std::endl;
        Form form("Dossier2", 151, 56);
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl << std::endl;
    }

    try
    {
        std::cout << "------TEST 3------" << std::endl;
        std::cout << "------Grade Form exec > 150------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Rick", 1);
        std::cout << bureaucrat << std::endl;
        Form form("Dossier3", 149, 156);
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl << std::endl;
    }

    try
    {
        std::cout << "------TEST 4------" << std::endl;
        std::cout << "------Grade Form Exec < 1------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Robert", 126);
        std::cout << bureaucrat << std::endl;
        Form form("Dossier3", 149, 0);
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl << std::endl;
    }

    try
    {
        std::cout << "------TEST 5------" << std::endl;
        std::cout << "------ Grade Bureau is good for sign and exec------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Richard", 46);
        std::cout << bureaucrat << std::endl;
        Form form("Dossier3", 50, 51);
        std::cout << form << std::endl << std::endl;
        form.beSigned(bureaucrat);
        bureaucrat.signForm(form);
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl << std::endl;
    }

    try
    {
        std::cout << "------TEST 6------" << std::endl;
        std::cout << "------ Grade Bureau is not good for sign and execute------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Albert", 125);
        std::cout << bureaucrat << std::endl;
        Form form("Dossier3", 50, 51);
        std::cout << form << std::endl << std::endl;
        form.beSigned(bureaucrat);
        bureaucrat.signForm(form);
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl << std::endl;
    }

    try
    {
        std::cout << "------TEST 7------" << std::endl;
        std::cout << "------ Grade Bureau is not good for execute------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Patrick", 100);
        std::cout << bureaucrat << std::endl;
        Form form("Dossier3", 102, 51);
        std::cout << form << std::endl << std::endl;
        form.beSigned(bureaucrat);
        bureaucrat.signForm(form);
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl << std::endl;
    }
    try
    {
        std::cout << "------TEST 8------" << std::endl;
        std::cout << "------ Grade Bureau is not good for sign------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Ben", 100);
        std::cout << bureaucrat << std::endl;
        Form form("Dossier3", 50, 102);
        std::cout << form << std::endl << std::endl;
        form.beSigned(bureaucrat);
        bureaucrat.signForm(form);
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl << std::endl;
    }
    return (0);
}
