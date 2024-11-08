#include "Show/IShow.hpp"
#include <string>

namespace customer
{
    /**
     * @brief An interface for a spectator
     * 
     */
    class ISpectator
    {
        public:
            /**
             * @brief Destroy the ISpectator object
             * 
             */
            virtual ~ISpectator() = default;

            /**
             * @brief Get the First Name object
             * 
             * @return std::string The first name of the spectator
             */
            virtual std::string getFirstName() const = 0;

            /**
             * @brief Get the Last Name object
             * 
             * @return std::string The last name of the spectator
             */
            virtual std::string getLastName() const = 0;

            /**
             * @brief Watch a show
             * 
             * @param show The show to watch
             */
            virtual void watch(const show::IShow &show) const = 0;
    };
}