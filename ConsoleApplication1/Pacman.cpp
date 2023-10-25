#include "Pacman.h"


void Pacman::move(Map map[NUM_ROWS][NUM_COLS], int x, int y) {
	int now_x = 0, now_y = 0;
	int sum = 0;
	while (1) {
		cout << "ÇëÊäÈë³Ô¶¹ÈËÒÆ¶¯·½Ïò£º(ÊäÈëeÍË³ö)";
		char dir;
		cin >> dir;
		if (dir == 'W' || dir == 'w') {
			now_x = x - 1;
			if (now_x < 0) {
				now_x = NUM_ROWS - 1;
			}
			now_y = y;
			if (map[now_x][now_y].goods == "WALL") {
				cout << "|\\  |-----" << endl;
				cout << "| \\ |  |  " << endl;
				cout << "|  \\|  |  " << endl;
				cout << "ÄÔÌ±Äã×²Ç½ËÀÁË" << endl;
				return;
			}
			if (map[now_x][now_y].goods == "DOT") {
				map[now_x][now_y].goods = "NA";
				sum++;
			}
		}
		if (dir == 'S' || dir == 's') {
			now_x = x + 1;
			if (now_x > NUM_ROWS) {
				now_x = 0;
			}
			now_y = y;
			/*if (map[now_x][now_y].goods == "WALL") {
				cout << "ÄÔÌ±Äã×²Ç½ËÀÁË" << endl;
				return;
			}*/
			if (map[now_x][now_y].goods == "WALL") {
				cout << "|\\  |-----" << endl;
				cout << "| \\ |  |  " << endl;
				cout << "|  \\|  |  " << endl;
				cout << "ÄÔÌ±Äã×²Ç½ËÀÁË" << endl;
				return;
			}
			if (map[now_x][now_y].goods == "DOT") {
				map[now_x][now_y].goods = "NA";
				sum++;
			}
		}
		if (dir == 'A' || dir == 'a') {
			now_y = y - 1;
			if (now_y < 0) {
				now_y = NUM_COLS - 1;
			}
			now_x = x;
			/*if (map[now_x][now_y].goods == "WALL") {
				cout << "ÄÔÌ±Äã×²Ç½ËÀÁË" << endl;
				return;
			}*/
			if (map[now_x][now_y].goods == "WALL") {
				cout << "|\\  |-----" << endl;
				cout << "| \\ |  |  " << endl;
				cout << "|  \\|  |  " << endl;
				cout << "ÄÔÌ±Äã×²Ç½ËÀÁË" << endl;
				return;
			}
			if (map[now_x][now_y].goods == "DOT") {
				map[now_x][now_y].goods = "NA";
				sum++;
			}
		}
		if (dir == 'D' || dir == 'd') {
			now_y = y + 1;
			if (now_y > NUM_COLS) {
				now_y = 0;
			}
			now_x = x;
			/*if (map[now_x][now_y].goods == "WALL") {
				cout << "ÄÔÌ±Äã×²Ç½ËÀÁË" << endl;
				return;
			}*/
			if (map[now_x][now_y].goods == "WALL") {
				cout << "|\\  |-----" << endl;
				cout << "| \\ |  |  " << endl;
				cout << "|  \\|  |  " << endl;
				cout << "ÄÔÌ±Äã×²Ç½ËÀÁË" << endl;
				return;
			}
			if (map[now_x][now_y].goods == "DOT") {
				map[now_x][now_y].goods = "NA";
				sum++;
			}
		}
		if (dir == 'P' || dir == 'p') {
			cout << "µ±Ç°ÄúµÄµÃ·ÖÎª£º" << sum * 10 << endl;
		}
		if (dir == 'E' || dir == 'e') {
			break;
		}
		x = now_x, y = now_y;
		map[NUM_ROWS][NUM_COLS].print_map(map, x, y);
	}
}