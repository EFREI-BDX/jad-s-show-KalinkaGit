#pragma once

#include "Show.hpp"
#include <vector>

namespace show
{
    class StreetShow : public Show
    {
        public:
            /**
            * @brief Construct a new Street Show object
            * 
            * @param name The name of the show
            * @param description The description of the show
            * @param performers The performers of the street show
            */
            StreetShow(
                const std::string &name,
                const std::string &description,
                const std::vector<std::string> &performers
            );

            /**
            * @brief Get the Performers object
            * 
            * @return std::vector<std::string> The performers of the street show
            */
            std::vector<std::string> getPerformers() const;

        private:
            std::vector<std::string> performers;
    };
}
