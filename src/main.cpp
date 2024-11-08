#include <vector>
#include <iostream>

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

	std::cout << spectator.getFirstName() << " " << spectator.getLastName() << std::endl;
	std::cout << concert.getName() << std::endl;
	std::cout << concert.getDescription() << std::endl;
	std::cout << concert.getShowType().getName() << std::endl;
	std::cout << concert.getArtist() << std::endl;
	std::cout << theater.getName() << std::endl;
	std::cout << theater.getDescription() << std::endl;

	return 0;
}
