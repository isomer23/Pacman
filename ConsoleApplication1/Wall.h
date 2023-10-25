#pragma once
#include "Map.h"

class Wall {
public:
	bool Is_Wall(Map map[NUM_ROWS][NUM_COLS], int x, int y);
	void Add_Wall(Map map[NUM_ROWS][NUM_COLS], int start_x, int start_y, int end_x, int end_y);
};