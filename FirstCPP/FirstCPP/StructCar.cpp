/*
struct ����ü��{
	�����ڷ�;
	....
};
���µ� C++������ ����ü�� ������ C����� �װͰ� ū ���̴� �����ϴ�.
�׷��� ���� C����� ����ü�� ���캸�ڽ��ϴ�.
*/


#include <iostream>
using namespace std;

#define FUEL_STEP 2
#define MAX_SPD 200
#define ACC_STEP 10
#define BRK_STEP 10
#define ID_LEN 20

struct Car {
	char gamerID[ID_LEN]; // ����ID
	int fuelGauge;
	int curSpeed;
};

void ShowCarState(Car& car) {
	cout << "ID : " << car.gamerID << endl;
	cout << "���� : " << car.fuelGauge << "%" << endl;
	cout << "����ӵ� :" << car.curSpeed << "km/s" << endl;

}

void Accel(Car& car) {
	if (car.fuelGauge <= 0) return;
	else car.fuelGauge -= FUEL_STEP;
	if (car.curSpeed + ACC_STEP >= MAX_SPD) {
		car.curSpeed = MAX_SPD;
		return;
	}

	car.curSpeed += ACC_STEP;
}

void Break(Car& car) {
	if (car.curSpeed < BRK_STEP) {
		car.curSpeed = 0;
		return;
	}

	car.curSpeed -= BRK_STEP;
}

int main(void) {
	Car car1 = { "gogo1212", 100, 0 };
	Accel(car1);
	Accel(car1);
	ShowCarState(car1);
	Break(car1);
	ShowCarState(car1);

	Car car2 = { "speed12", 100, 0 };
	Accel(car2);
	Break(car2);
	ShowCarState(car2);
	system("pause");
	return 0;
}