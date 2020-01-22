#pragma once
#ifndef __LOCATION_H__
#define __LOCATION_H__

class Location {
private:
	int x;
	int y;
public:
	bool InitLocation(int xloc, int yloc);
	int GetX();
	int GetY();
	bool SetX(int xloc);
	bool SetY(int yloc);
};
#endif