


#include <iostream>
using namespace std;

namespace CAR_ENUM{
	enum {
		FUEL_STEP = 2,
		MAX_SPD = 200,
		ACC_STEP = 10,
		BRK_STEP = 10,
		ID_LEN = 20
	};
}


struct Car {
	char gamerID[CAR_ENUM::ID_LEN]; // 유저ID
	int fuelGauge;
	int curSpeed;


	void ShowCarState() {
		cout << "ID : " << gamerID << endl;
		cout << "연료 : " << fuelGauge << "%" << endl;
		cout << "현재속도 :" << curSpeed << "km/s" << endl;

	}

	void Accel() {
		if (fuelGauge <= 0) return;
		else fuelGauge -= CAR_ENUM::FUEL_STEP;
		if (curSpeed + CAR_ENUM::ACC_STEP >= CAR_ENUM::MAX_SPD) {
			curSpeed = CAR_ENUM::MAX_SPD;
			return;
		}

		curSpeed += CAR_ENUM::ACC_STEP;
	}

	void Break() {
		if (curSpeed < CAR_ENUM::BRK_STEP) {
			curSpeed = 0;
			return;
		}

		curSpeed -= CAR_ENUM::BRK_STEP;
	}
};

int main(void) {
	Car car1 = { "gogo1212", 100, 0 };
	car1.Accel();
	car1.Accel();
	car1.ShowCarState();
	car1.Accel();
	car1.Break();
	car1.ShowCarState();


	Car car2 = { "speed12", 100, 0 };
	car2.Accel();
	car2.Break();
	car2.ShowCarState();
	system("pause");
	return 0;
}

/*
구조체를 클래스의 변환
구조체 문법에서 struct라는 키워드를 class로 바꾸기만 하면
클래스로 변경할 수 있습니다.
이것이 클래스와 구조체의 "유일한 문법적인 차이"입니다.
하지만 클래스는 추후 상속, 생성자, 소멸자 등을 활용해서 구조체와는
비교할 수 있는 프로그래밍의 편의성을 얻을 수 있기 떄문에
단순히 문법만 바귀었다고 생각하시면 안됩니다.
또한 접근 제한자라는 개념이 새롭게 적용되었습니다.
private, protected, public 이라는 3가지 접근 제한자를 사용할 수 있으며
이접근 제한자는 외부에서의 접근을 허용할지 말지에 대해 결정합니다.
그러나 protected 제한자 같은 경우는 지금 당장 배우기에는
상속 개념을 모르기 때문에 현재 상속 개념 없이 사용할 수 있는
private, public에 대해서만 한번 공부해보겠ㅅ브니다.
private은 외부지역에서 접근 불가입니다.
말 그대로 자기 지역 내부에서만 접근이 가능합니다.
public은 단어 그대로 외부에 공개된 요소입니다.
그래서 클래스 내부가 아닌 외부에서도 접근이 가능합니다.
*/