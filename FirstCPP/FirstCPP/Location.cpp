#include <iostream>
#include "Location.h"
using namespace std;

bool Location::InitLocation(int xloc, int yloc) {
	if (xloc < 0 || yloc < 0) {
		cout << "값이 도화지를 벗어났습니다." << endl;
		return false;
	}
	x = xloc;
	y = yloc;
	return true;
}

int Location::GetX() {
	return x;
}

int Location::GetY() {
	return y;
}
bool Location::SetX(int xloc) {
	if (0 > xloc) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	x = xloc;
	return true;
}

bool Location::SetY(int yloc) {
	if (0 > yloc) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	y = yloc;
	return true;
}