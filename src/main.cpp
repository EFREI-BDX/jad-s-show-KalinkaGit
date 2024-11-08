#include <vector>

#include "Show/ConcertShow.hpp"
#include "Show/TheaterShow.hpp"
#include "Show/MovieShow.hpp"
#include "Customer/Spectator.hpp"

int main()
{
	show::ConcertShow concert("Rock Concert", "An amazing rock concert.", "The Rock Band");
    show::TheaterShow theater("Shakespeare Play", "A classic play by Shakespeare.", {"Actor A", "Actor B"});
    show::MovieShow movie("Sci-Fi Movie", "An exciting science fiction movie.", "Jane Smith", "2023", show::MovieType::SCIENCE_FICTION);

    customer::Spectator spectator("Alice", "Johnson");
    spectator.watch(concert);
    spectator.watch(theater);
    spectator.watch(movie);

	return 0;
}
