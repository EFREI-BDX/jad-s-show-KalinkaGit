#include "Show/StreetShow.hpp"

namespace show
{
    StreetShow::StreetShow(
        const std::string &name,
        const std::string &description,
        const std::vector<std::string> &performer
    )
        : Show(name, description, EShowType("Spectacle de rue")), performers(performer)
    {}

    std::vector<std::string> StreetShow::getPerformers() const
    {
        return performers;
    }
}
