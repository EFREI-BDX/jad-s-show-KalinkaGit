#pragma once

#include <string>

namespace show
{
    /**
     * @brief The type of show
     * 
     */
    enum class ShowType
    {
        MOVIE = 0,
        STREET_SHOW,
        THEATER,
        CONCERT,
        OTHER
    };

    /**
    * @brief An interface for a show
    * 
    */
    class IShow
    {
        public:
            /**
            * @brief Destroy the IShow object
            * 
            */
            virtual ~IShow() = default;

            /**
            * @brief Get the Name object
            * 
            * @return std::string The name of the show
            */
            virtual std::string getName() const = 0;

            /**
            * @brief Get the Description object
            * 
            * @return std::string The description of the show
            */
            virtual std::string getDescription() const = 0;

            /**
            * @brief Get the Show Type object
            * 
            * @return ShowType The type of the show
            */
            virtual ShowType getShowType() const = 0;
    };
}
