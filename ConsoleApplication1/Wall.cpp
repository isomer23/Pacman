#include "Wall.h"
using namespace std;



bool Wall::Is_Wall(Map map[NUM_ROWS][NUM_COLS], int x, int y) {
	for (int i = 0; i < NUM_ROWS; i++) {
		for (int j = 0; j < NUM_COLS; j++) {
			if (map[i][j].goods == "WALL") {
				return 1;
			}
		}
	}
	return 0;
}

void Add_Wall(Map map[NUM_ROWS][NUM_COLS], int start_x, int start_y, int end_x, int end_y) {
	if (start_x < 0) {
		start_x = 0;
	}
	if (start_y < 0) {
		start_y = 0;
	}
	if (end_x > NUM_ROWS) {
		end_x = NUM_ROWS;
	}
	if (end_y > NUM_COLS) {
		end_y = NUM_COLS;
	}
	for (int i = start_x; i < end_x; i++) {
		for (int j = start_y; i < end_y; j++) {
			map[i][j].goods = "WALL";
		}
	}
}