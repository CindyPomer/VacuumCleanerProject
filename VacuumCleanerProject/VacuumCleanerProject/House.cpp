#include "House.h"
#include "Config.h"
#include "Point.h"
using namespace std;

Point House::findDockingStation(const char house[][MAX_COL + 1], int rows, int cols)
 {
	for (size_t row = 0; row < rows; ++row) {
		for (size_t col = 0; col < cols; ++col) {
			if (house[row][col] == House::DOCKING) {
				return Point(col, row); 
			}
		}
	}
	return Point(-1, -1);
}