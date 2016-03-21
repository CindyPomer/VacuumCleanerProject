#ifndef _HOUSE_H_
#define _HOUSE_H_
#include "Config.h"
#include "Point.h"
class House {
public:
	// may contain all sort of things :-)
	// not only this enum...
	enum { DOCKING = 'D', WALL = 'W' };
	static Point findDockingStation(const char house[][MAX_COL + 1], int rows, int cols);
};

#endif