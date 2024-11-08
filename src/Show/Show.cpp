#include "Show/Show.hpp"

namespace show
{
    Show::Show(const std::string &name, const std::string &description, ShowType showType)
        : name(name), description(description), showType(showType)
    {}

    std::string Show::getName() const
    {
        return name;
    }

    std::string Show::getDescription() const
    {
        return description;
    }

    ShowType Show::getShowType() const
    {
        return showType;
    }
}
