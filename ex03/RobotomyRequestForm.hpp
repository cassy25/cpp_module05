#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <time.h>

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(std::string const& target);
        RobotomyRequestForm(RobotomyRequestForm const& copy);
        RobotomyRequestForm& operator=(RobotomyRequestForm const& copy);
        std::string getName() const;
        void execute(Bureaucrat const& executor) const;
    private:
        std::string _target;
};

#endif