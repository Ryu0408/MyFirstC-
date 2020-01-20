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


	void ShowCarState() {
		cout << "ID : " << gamerID << endl;
		cout << "연료 : " << fuelGauge << "%" << endl;
		cout << "현재속도 :" << curSpeed << "km/s" << endl;

	}

	void Accel() {
		if (fuelGauge <= 0) return;
		else fuelGauge -= FUEL_STEP;
		if (curSpeed + ACC_STEP >= MAX_SPD) {
			curSpeed = MAX_SPD;
			return;
		}

		curSpeed += ACC_STEP;
	}

void Break() {
		if (curSpeed < BRK_STEP) {
			curSpeed = 0;
			return;
		}

	curSpeed -= BRK_STEP;
	}
};

int main(void) {
	Car car1 = { "gogo1212", 100, 0 };
	car1.Accel();
	car1.Accel();
	car1.Accel();
	car1.ShowCarState();

	Car car2 = { "speed12", 100, 0 };
	car2.Accel();
	car2.Break();
	car2.ShowCarState();
	system("pause");
	return 0;
}