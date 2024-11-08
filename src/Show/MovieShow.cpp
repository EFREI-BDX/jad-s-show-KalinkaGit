#include "Show/MovieShow.hpp"

namespace show {
    MovieShow::MovieShow(
        const std::string &name,
        const std::string &description,
        const std::string &director,
        const std::string &yearOfRelease,
        MovieType movieType
    )
        : Show(name, description, showType), director(director), yearOfRelease(yearOfRelease), movieType(movieType)
    {}

    std::string MovieShow::getDirector() const {
        return director;
    }

    std::string MovieShow::getYearOfRelease() const {
        return yearOfRelease;
    }

    MovieType MovieShow::getMovieType() const {
        return movieType;
    }
}
