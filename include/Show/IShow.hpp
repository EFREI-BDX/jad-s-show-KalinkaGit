#pragma once

#include <string>

#include "EShowType.hpp"

namespace show
{
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
            * @return EShowType The type of the show
            */
            virtual EShowType getShowType() const = 0;
    };
}
