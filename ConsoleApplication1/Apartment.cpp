#include "Apartment.h"

void Apartment::AddRoom(Room& room)
{
	if (area >= room.GetRoomArea()) {
		rooms.push_back(room);
		area -= room.GetRoomArea();
	}
	else {
		throw std::invalid_argument("«начение комнаты превысило значение квартиры");
	}
}

int Apartment::CheckApartmentArea()
{
	return area;
}
