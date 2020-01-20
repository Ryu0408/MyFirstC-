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


#include <iostream>
using namespace std;

namespace CAR_ENUM {
	enum {
		FUEL_STEP = 2,
		MAX_SPD = 200,
		ACC_STEP = 10,
		BRK_STEP = 10,
		ID_LEN = 20
	};
}


class Car {
private:
	char ID[CAR_ENUM::ID_LEN];
	int fuel;
	int speed;
public:
	void InitMembers(const char* id, int f) {
		strcpy(ID, id);
		fuel = f;
		speed = 0;
	}
	void ShowCarState() {
		cout << "ID : " << ID << endl;
		cout << "���� : " << fuel << "%" << endl;
		cout << "����ӵ� :" << speed << "km/s" << endl;

	}

	void Accel() {
		if (fuel <= 0) return;
		else fuel -= CAR_ENUM::FUEL_STEP;
		if (speed + CAR_ENUM::ACC_STEP >= CAR_ENUM::MAX_SPD) {
			speed = CAR_ENUM::MAX_SPD;
			return;
		}

		speed += CAR_ENUM::ACC_STEP;
	}

	void Break() {
		if (speed < CAR_ENUM::BRK_STEP) {
			speed = 0;
			return;
		}

		speed -= CAR_ENUM::BRK_STEP;
	}
};

int main(void) {
	Car car1;
	car1.InitMembers("gogo12", 100);
	car1.Accel();
	car1.Accel();
	car1.ShowCarState();
	system("pause");
	return 0;
}

