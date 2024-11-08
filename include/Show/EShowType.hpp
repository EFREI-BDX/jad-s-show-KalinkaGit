#pragma once

#include <string>

namespace show
{
    class EShowType
    {
        public:
            static const EShowType MOVIE;
            static const EShowType STREET_SHOW;
            static const EShowType THEATER;
            static const EShowType CONCERT;
            static const EShowType OTHER;

            ~EShowType() = default;

            EShowType(const std::string &name) : name(name) {}

            std::string getName() const
            {
                return name;
            }

        private:
            std::string name;
    };
}