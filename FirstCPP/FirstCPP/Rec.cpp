#include <iostream>
#include "Rec.h"
#include "Location.h"

using namespace std;
bool Rec::InitRec(Location& ul, Location& lr) {
	if (ul.GetX() > lr.GetX() || ul.GetY()  > lr.GetX()) {
		cout << "�»��, ���ϴ� ��ġ�� ���� �ʽ��ϴ�," << endl;
	}

	upLeft = ul;
	lowRight = lr;
	return true;
}

void Rec::ShowRec() {
	cout << "�»�� ��ǥ : " << upLeft.GetX() << ",";
	cout << upLeft.GetY() << endl;
	cout << "���ϴ� ��ǥ : " << lowRight.GetX() << ",";
	cout << lowRight.GetY() << endl;

}