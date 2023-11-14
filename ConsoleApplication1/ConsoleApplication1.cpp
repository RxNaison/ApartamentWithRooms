#include <iostream>
#include <vector>
#include <exception>
#include "Room.h"
#include "Apartment.h"


int main()
{
	Room room(12, "fgvbhnjmk", 2, true);
	Apartment apartment(12, "xdcfvghj", 123);
	apartment.AddRoom(room);

	std::cout<<apartment.CheckApartmentArea();

	return 0;

}

