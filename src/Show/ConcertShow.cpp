#include "Show/ConcertShow.hpp"

namespace show
{
    ConcertShow::ConcertShow(
        const std::string &name,
        const std::string &description,
        const std::string &artist
    )
        : Show(name, description, ShowType::CONCERT), artist(artist)
    {}

    std::string ConcertShow::getArtist() const
    {
        return artist;
    }
}
