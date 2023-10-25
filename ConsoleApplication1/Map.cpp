#include "Map.h"


void Map::init(Map map[NUM_ROWS][NUM_COLS]) {
	for (int i = 0; i < NUM_ROWS; i++) {
		for (int j = 0; j < NUM_COLS; j++) {
			map[i][j].goods = "NA";
		}
	}
}


void Map::print_map(Map map[NUM_ROWS][NUM_COLS], int x, int y) {
	for (int i = 0; i < NUM_COLS; i++) {
		cout << "----";
	}
	cout << "-\n";
	for (int i = 0; i < NUM_ROWS; i++) {
		cout << "|";
		for (int j = 0; j < NUM_COLS; j++) {
			if (map[i][j].goods == "WALL") {
				cout << "|||";
			}
			else if (i == x && j == y) {
				cout << "^_^";
			}
			else if (map[i][j].goods == "DOT") {
				cout << " . ";
			}
			else if (map[i][j].goods == "APPLE") {
				cout << " a ";
			}
			else if (map[i][j].goods == "BANANA") {
				cout << " b ";
			}
			else {
				cout << "   ";
			}
			cout << "|";
		}
		cout << endl;
		
	}
	for (int i = 0; i < NUM_COLS; i++) {
		cout << "----";
	}
	cout << "-\n";
}



bool Map::Is_Wall(Map map[NUM_ROWS][NUM_COLS], int x, int y) {
	for (int i = 0; i < NUM_ROWS; i++) {
		for (int j = 0; j < NUM_COLS; j++) {
			if (map[i][j].goods == "WALL") {
				return 1;
			}
		}
	}
	return 0;
}

void Map::Add_Wall(Map map[NUM_ROWS][NUM_COLS], int start_x, int start_y, int end_x, int end_y) {
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
	for (int i = start_x; i <= end_x; i++) {
		for (int j = start_y; j <= end_y; j++) {
			map[i][j].goods = "WALL";
		}
	}
}
void Map::Add_Point(Map map[NUM_ROWS][NUM_COLS]) {
	for (int i = 0; i < NUM_ROWS; i++) {
		for (int j = 0; j < NUM_COLS; j++) {
			if (map[i][j].goods == "NA") {
				map[i][j].goods = "DOT";
			}
		}
	}
}