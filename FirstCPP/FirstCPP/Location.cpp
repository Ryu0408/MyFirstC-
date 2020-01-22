#include <iostream>
#include "Location.h"
using namespace std;

bool Location::InitLocation(int xloc, int yloc) {
	if (xloc < 0 || yloc < 0) {
		cout << "���� ��ȭ���� ������ϴ�." << endl;
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
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	x = xloc;
	return true;
}

bool Location::SetY(int yloc) {
	if (0 > yloc) {
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	y = yloc;
	return true;
}