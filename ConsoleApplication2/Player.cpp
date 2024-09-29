#include "Player.h"

Player::Player()
{
	for (int i = 0; i < 10; i++)
	{
		occupied.push_back(std::vector<bool>(10, false));
		shot.push_back(std::vector<bool>(10, false));		
	}
}

bool Player::place_ship(int x, int y, int ship_size)
{
	if (y + ship_size < 10)
	{
		for (int i = y; i < y + ship_size; i++)
		{
			occupied[y][x] = true;
		}
		return true;
	}
	else
	{
		return false;
	}
	
}

bool Player::rotate(int x, int y, int ship_size)
{
	if (ship_size > 1)
	{
		if (x + 1 < 10 && occupied[y][x + 1] == true)
		{
			if (y + ship_size < 10)
			{
				for (int i = y + 1; i < y + ship_size; i++)
				{
					if (occupied[i][x] == true)
					{
						for (int j = i; j > y; j--)
						{
							occupied[j][x] = false;
						}
						return false;
					}
					occupied[i][x] = true;
				}
				for (int i = x + 1; i < x + ship_size; i++)
				{
					occupied[y][i] = false;
				}			
				return true;
			}
			else
			{
				return false;
			}	
		}
		else
		{
			if (x + ship_size < 10)
			{
				for (int i = x + 1; i < x + ship_size; i++)
				{
					if (occupied[y][i] == true)
					{
						for (int j = i; j > x; j--)
						{
							occupied[y][j] = false;
						}
						return false;
					}
					occupied[y][i] = true;
				}
				for (int i = y + 1; i < y + ship_size; i++)
				{
					occupied[i][x] = false;
				}
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}

//move?

void Player::shoot()
{

}
