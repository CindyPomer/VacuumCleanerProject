#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>
#include "ConsoleUtils.h"

using namespace std;

class Point {
	int x;
	int y;
public:
	Point(int _x, int _y) : x(_x), y(_y) {}
	int getX() const {
		return x;
	}
	int getY() const {
		return y;
	}
	Point distance(const Point& other)const {
		return Point(x - other.x, y - other.y);
	}
	void set(int _x, int _y) {
		x = _x;
		y = _y;
	}
	void draw(char ch) {
		gotoxy(x, y);
		cout << ch;
		cout.flush();
	}
	void move();
	void move(int direction);
	Point next(int direction) {
		Point next = *this;
		next.move(direction);
		return next;
	}
	bool isSame(const Point& p) const {
		return x == p.x && y == p.y;
	}
};

#endif