#ifndef _SIMUlATIONPRINTUTILS_H_
#define _SIMUlATIONPRINTUTILS_H_
#include "Config.h"
#include "Point.h"
#include "ConsoleUtils.h"
#include <iostream>

class SimulationPrintUtils
{
public:
	static void printInitialMenu();
	static void printSecondaryMenu();
	
	
	// house printing related stuff
	static void printMovedHouse(const char house[][MAX_COL + 1], int rows, int cols);
	static void printInitialHouseSimulation(const char house[][MAX_COL + 1],
		int rows,
		int cols,
		Point& dockingStation);
	static void printPointOnMovedHouse(const char house[][MAX_COL + 1],
		int rows,
		int cols,
		Point& point,
		Point& dockingStation,
		bool isPrintHouseChar, char CharToPrint );

};

#endif