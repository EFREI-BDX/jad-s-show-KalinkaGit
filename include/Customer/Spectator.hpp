#pragma once

#include "ISpectator.hpp"

namespace customer
{
    /**
     * @brief A spectator
     * 
     */
    class Spectator : public ISpectator 
    {
        public:
            /**
             * @brief Construct a new Spectator object
             * 
             * @param firstName The first name of the spectator
             * @param lastName The last name of the spectator
             */
            Spectator(const std::string &firstName, const std::string &lastName);

            /**
             * @brief Get the First Name object
             * 
             * @return std::string The first name of the spectator
             */
            std::string getFirstName() const override;

            /**
             * @brief Get the Last Name object
             * 
             * @return std::string The last name of the spectator
             */
            std::string getLastName() const override;

            /**
             * @brief Watch a show
             * 
             * @param show The show to watch
             */
            void watch(const show::IShow &show) const override;

        private:
            std::string firstName;
            std::string lastName;
    };
}
