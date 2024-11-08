#pragma once

#include <string>

#include "IShow.hpp"
#include "EShowType.hpp"

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
            EShowType showType;

        public:
            /**
            * @brief Construct a new Show object
            * 
            * @param name The name of the show
            * @param description The description of the show
            * @param showType The type of the show
            */
            Show(const std::string &name, const std::string &description, EShowType showType);

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
            * @return EShowType The type of the show
            */
            EShowType getShowType() const override;
    };
}
