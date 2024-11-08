#include "Customer/Spectator.hpp"

#include <iostream>

namespace customer 
{
    Spectator::Spectator(const std::string &firstName, const std::string &lastName)
        : firstName(firstName), lastName(lastName) {}

    std::string Spectator::getFirstName() const {
        return firstName;
    }

    std::string Spectator::getLastName() const {
        return lastName;
    }

    void Spectator::watch(const show::IShow &show) const {
        std::cout << firstName << " " << lastName << " is watching " << show.getName() << std::endl;
    }
}
