#include "Bureaucrat.hpp"

int main()
{
    try
    {
        std::cout << "------TEST 1------" << std::endl;
        std::cout << "------ Grade Bureaucrat 0------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Bob", 0);
        bureaucrat.upGrade();
        std::cout << bureaucrat << std::endl;
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl;
    }

    try
    {
        std::cout << "------TEST 2------" << std::endl;
        std::cout << "------ Grade Bureaucrat 151------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Sully", 151);
        bureaucrat.lowerGrade();
        std::cout << bureaucrat << std::endl;
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl;
    }

    try
    {
        std::cout << "------TEST 3------" << std::endl;
        std::cout << "------ Grade Bureaucrat 1 and upgrade------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Rodolphe", 1);
        bureaucrat.upGrade();
        std::cout << bureaucrat << std::endl;
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl;
    }

    try
    {
        std::cout << "------TEST 4------" << std::endl;
        std::cout << "------ Grade Bureaucrat 150 and lower grade------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Robert", 150);
        bureaucrat.lowerGrade();
        std::cout << bureaucrat << std::endl;
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl;
    }

    try
    {
        std::cout << "------TEST 5------" << std::endl;
        std::cout << "------ Grade Bureaucrat 46 and lower grade so 47------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Richard", 46);
        bureaucrat.lowerGrade();
        std::cout << bureaucrat << std::endl;
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl;
    }

    try
    {
        std::cout << "------TEST 6------" << std::endl;
        std::cout << "------ Grade Bureaucrat 102 and upgrade so 101------" << std::endl << std::endl;
        Bureaucrat bureaucrat("Ruben", 102);
        bureaucrat.upGrade();
        std::cout << bureaucrat << std::endl;
    } catch (const std::exception& mess)
    {
        std::cerr << "Exception " << mess.what() << std::endl;
    }
}
