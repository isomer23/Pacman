#pragma once
#include "Map.h"
class Pacman {
public:
	char direction;
	int point;
	void move(Map map[NUM_ROWS][NUM_COLS], int x, int y);
};