


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
	char gamerID[CAR_ENUM::ID_LEN]; // ����ID
	int fuelGauge;
	int curSpeed;


	void ShowCarState() {
		cout << "ID : " << gamerID << endl;
		cout << "���� : " << fuelGauge << "%" << endl;
		cout << "����ӵ� :" << curSpeed << "km/s" << endl;

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
����ü�� Ŭ������ ��ȯ
����ü �������� struct��� Ű���带 class�� �ٲٱ⸸ �ϸ�
Ŭ������ ������ �� �ֽ��ϴ�.
�̰��� Ŭ������ ����ü�� "������ �������� ����"�Դϴ�.
������ Ŭ������ ���� ���, ������, �Ҹ��� ���� Ȱ���ؼ� ����ü�ʹ�
���� �� �ִ� ���α׷����� ���Ǽ��� ���� �� �ֱ� ������
�ܼ��� ������ �ٱ;��ٰ� �����Ͻø� �ȵ˴ϴ�.
���� ���� �����ڶ�� ������ ���Ӱ� ����Ǿ����ϴ�.
private, protected, public �̶�� 3���� ���� �����ڸ� ����� �� ������
������ �����ڴ� �ܺο����� ������ ������� ������ ���� �����մϴ�.
�׷��� protected ������ ���� ���� ���� ���� ���⿡��
��� ������ �𸣱� ������ ���� ��� ���� ���� ����� �� �ִ�
private, public�� ���ؼ��� �ѹ� �����غ��ڤ���ϴ�.
private�� �ܺ��������� ���� �Ұ��Դϴ�.
�� �״�� �ڱ� ���� ���ο����� ������ �����մϴ�.
public�� �ܾ� �״�� �ܺο� ������ ����Դϴ�.
�׷��� Ŭ���� ���ΰ� �ƴ� �ܺο����� ������ �����մϴ�.
*/