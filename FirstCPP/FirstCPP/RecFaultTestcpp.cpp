#include <iostream>
#include "Location.h"
#include "Rec.h"

using namespace std;

int main(void) {
	Location loc1;
	if (!loc1.InitLocation(-3, 5))
		cout << "�߸��� ���� ���Խ��ϴ�." << endl;
	if (!loc1.InitLocation(4, 3))
		cout << "�߸��� ���� ���Խ��ϴ�." << endl;

	Location loc2;
	if (!loc2.InitLocation(5, 7))
		cout << "�߸��� ���� ���Խ��ϴ�." << endl;
	
	Rec rec;
	if (!rec.InitRec(loc2, loc1))
		cout << "���簢�� �ʱ�ȭ ����" << endl;

	if (!rec.InitRec(loc1, loc2))
		cout << "���簢�� �ʱ�ȭ ����" << endl;

	rec.ShowRec();
	system("pause");
	return 0;
}