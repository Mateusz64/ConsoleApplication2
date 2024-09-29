#pragma once

#include <vector>

class Player
{
private:
    std::vector<std::vector<bool>> occupied, shot;
	
public:
	Player();
	bool place_ship(int x, int y, int ship_size);
	bool rotate(int x, int y, int ship_size);
	void shoot();
};

