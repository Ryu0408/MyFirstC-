/*
struct 구조체명{
	내부자료;
	....
};
였는데 C++에서도 구조체의 역할은 C언어의 그것과 큰 차이는 없습니다.
그래서 먼저 C언어의 구조체를 살펴보겠습니다.
*/


#include <iostream>
using namespace std;

#define FUEL_STEP 2
#define MAX_SPD 200
#define ACC_STEP 10
#define BRK_STEP 10
#define ID_LEN 20

struct Car {
	char gamerID[ID_LEN]; // 유저ID
	int fuelGauge;
	int curSpeed;
};

void ShowCarState(Car& car) {
	cout << "ID : " << car.gamerID << endl;
	cout << "연료 : " << car.fuelGauge << "%" << endl;
	cout << "현재속도 :" << car.curSpeed << "km/s" << endl;

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