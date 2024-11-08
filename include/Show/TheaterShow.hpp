#pragma once

#include <vector>

#include "Show.hpp"

namespace show
{
    /**
     * @brief A theater show
     * 
     */
    class TheaterShow : public Show
    {
        public:
            /**
             * @brief Construct a new Theater Show object
             * 
             * @param name The name of the show
             * @param description The description of the show
             * @param actors The actors of the theater show
             */
            TheaterShow(
                const std::string &name,
                const std::string &description,
                const std::vector<std::string> &actors
            );

            /**
             * @brief Get the Director object
             * 
             * @return std::string The director of the theater show
             */
            std::string getDirector() const;

            /**
             * @brief Get the Actors object
             * 
             * @return std::vector<std::string> The actors of the theater show
             */
            std::vector<std::string> getActors() const;

        private:
            std::string director;
            std::vector<std::string> actors;
    };
}