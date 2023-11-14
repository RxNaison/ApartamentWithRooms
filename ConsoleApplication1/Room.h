#pragma once
#include <string> 
class Room
{
	public:
		Room(int area, std::string name, int windows, bool balcon) {
			this->area = area;
			this->name = name;
			this->windows = windows;
			this->balcon = balcon;
		}
		int GetRoomArea();
	private:
		int area;
		std::string name;
		int windows;
		bool balcon;
	
};

