#pragma once
#include <iostream>
#include <string>
using namespace std;

#define NUM_ROWS 10
#define NUM_COLS 8

class Map {
public:
	string goods;
	void print_map(Map map[NUM_ROWS][NUM_COLS], int x, int y);
	void init(Map map[NUM_ROWS][NUM_COLS]);
	//ǽ�Ĳ���
	bool Is_Wall(Map map[NUM_ROWS][NUM_COLS], int x, int y);
	void Add_Wall(Map map[NUM_ROWS][NUM_COLS], int start_x, int start_y, int end_x, int end_y);
	//���ӵĲ���
	void Add_Point(Map map[NUM_ROWS][NUM_COLS]);
};