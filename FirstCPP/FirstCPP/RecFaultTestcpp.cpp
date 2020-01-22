#include <iostream>
#include "Location.h"
#include "Rec.h"

using namespace std;

int main(void) {
	Location loc1;
	if (!loc1.InitLocation(-3, 5))
		cout << "잘못된 값이 들어왔습니다." << endl;
	if (!loc1.InitLocation(4, 3))
		cout << "잘못된 값이 들어왔습니다." << endl;

	Location loc2;
	if (!loc2.InitLocation(5, 7))
		cout << "잘못된 값이 들어왔습니다." << endl;
	
	Rec rec;
	if (!rec.InitRec(loc2, loc1))
		cout << "직사각형 초기화 실패" << endl;

	if (!rec.InitRec(loc1, loc2))
		cout << "직사각형 초기화 실패" << endl;

	rec.ShowRec();
	system("pause");
	return 0;
}