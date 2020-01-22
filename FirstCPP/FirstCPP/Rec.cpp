#include <iostream>
#include "Rec.h"
#include "Location.h"

using namespace std;
bool Rec::InitRec(Location& ul, Location& lr) {
	if (ul.GetX() > lr.GetX() || ul.GetY()  > lr.GetX()) {
		cout << "좌상단, 우하단 위치가 맞지 않습니다," << endl;
	}

	upLeft = ul;
	lowRight = lr;
	return true;
}

void Rec::ShowRec() {
	cout << "좌상단 좌표 : " << upLeft.GetX() << ",";
	cout << upLeft.GetY() << endl;
	cout << "우하단 좌표 : " << lowRight.GetX() << ",";
	cout << lowRight.GetY() << endl;

}