#include "Show.hpp"

namespace show
{
    /**
     * @brief A concert show
     * 
     */
    class ConcertShow : public Show
    {
        public:
            /**
            * @brief Construct a new Concert Show object
            * 
            * @param name The name of the show
            * @param description The description of the show
            * @param artist The artist of the concert
            */
            ConcertShow(
                const std::string &name,
                const std::string &description,
                const std::string &artist
            );

            /**
            * @brief Get the Artist object
            * 
            * @return std::string The artist of the concert
            */
            std::string getArtist() const;

        private:
            std::string artist;
    };
}
