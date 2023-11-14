#pragma once
#include "Room.h"
#include <vector>
#include <stdexcept>

class Apartment
{
public:
	Apartment(int area, std::string address, int floor) {
		this->area = area;
		this->floor = floor;
		this->address = address;
	}

	void AddRoom(Room& room);

	int CheckApartmentArea();
private:
	int area;
	int floor;
	std::string address;
	std::vector<Room> rooms;
};

