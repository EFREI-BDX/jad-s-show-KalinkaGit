#pragma once

#include "Show.hpp"

namespace show {
    /**
     * @brief The type of movie
     * 
     */
    enum class MovieType {
        ACTION = 0,
        ADVENTURE,
        COMEDY,
        DRAMA,
        FANTASY,
        HORROR,
        ROMANCE,
        SCIENCE_FICTION,
        THRILLER
    };

    /**
     * @brief A movie show
     * 
     */
    class MovieShow : public Show {
        public:
            /**
             * @brief Construct a new Movie Show object
             * 
             * @param name The name of the show
             * @param description The description of the show
             * @param director The director of the movie
             * @param yearOfRelease The year of release of the movie
             * @param movieType The type of the movie
             */
            MovieShow(
                const std::string &name,
                const std::string &description,
                const std::string &director,
                const std::string &yearOfRelease,
                MovieType movieType
            );

            /**
             * @brief Get the Director object
             * 
             * @return std::string The director of the movie
             */
            std::string getDirector() const;

            /**
             * @brief Get the Year Of Release object
             * 
             * @return std::string The year of release of the movie
             */
            std::string getYearOfRelease() const;

            /**
             * @brief Get the Movie Type object
             * 
             * @return MovieType The type of the movie
             */
            MovieType getMovieType() const;

        private:
            std::string director;
            std::string yearOfRelease;
            MovieType movieType;
    };
}
