#pragma once

#include <string>

#include "IShow.hpp"

namespace show
{
    /**
    * @brief A show
    * 
    */
    class Show : public IShow
    {
        protected:
            std::string name;
            std::string description;
            ShowType showType;

        public:
            /**
            * @brief Construct a new Show object
            * 
            * @param name The name of the show
            * @param description The description of the show
            * @param showType The type of the show
            */
            Show(const std::string &name, const std::string &description, ShowType showType);

            /**
            * @brief Get the Name object
            * 
            * @return std::string The name of the show
            */
            std::string getName() const override;

            /**
            * @brief Get the Description object
            * 
            * @return std::string The description of the show
            */
            std::string getDescription() const override;

            /**
            * @brief Get the Show Type object
            * 
            * @return ShowType The type of the show
            */
            ShowType getShowType() const override;
    };
}
