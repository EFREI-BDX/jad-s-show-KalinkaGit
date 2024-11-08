#include "Show/StreetShow.hpp"

namespace show
{
    StreetShow::StreetShow(
        const std::string &name,
        const std::string &description,
        const std::vector<std::string> &performer
    )
        : Show(name, description, ShowType::STREET_SHOW), performers(performer)
    {}

    std::vector<std::string> StreetShow::getPerformers() const
    {
        return performers;
    }
}
