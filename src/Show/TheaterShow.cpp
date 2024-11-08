#include "Show/TheaterShow.hpp"

namespace show
{
    TheaterShow::TheaterShow(
        const std::string &name,
        const std::string &description,
        const std::vector<std::string> &actors
    )
        : Show(name, description, ShowType::THEATER), actors(actors)
    {}

    std::string TheaterShow::getDirector() const
    {
        return director;
    }

    std::vector<std::string> TheaterShow::getActors() const
    {
        return actors;
    }
}
