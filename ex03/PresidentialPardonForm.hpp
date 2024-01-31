#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(std::string const& target);
        PresidentialPardonForm(PresidentialPardonForm const& copy);
        PresidentialPardonForm& operator=(PresidentialPardonForm const& copy);
        std::string getName() const;
        void execute(Bureaucrat const& executor) const;
    private:
        std::string _target;
};

#endif