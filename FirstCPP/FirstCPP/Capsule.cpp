#include <iostream>
using namespace std;
class Sinivel {
public:
	void Take() { cout << "�๰óġ�� ����" << endl; }
};
class Sneeze {
public:
	void Take() { cout << "��ü�� óġ�� ����" << endl; }
};
class Snuffle {
public:
	void Take() { cout << "�ڸ��� óġ�� ����" << endl; }
};

class Medicine {
private:
	Sinivel sinivel;
	Sneeze sneeze;
	Snuffle snuffle;
public:
	void Take() {
		sinivel.Take();
		sneeze.Take();
		snuffle.Take();
	}
};

class Patient {
public:
	void TakeMedicine(Medicine& medicine) {
		medicine.Take();
	}
};

int main(void) {
	Medicine medicine;
	Patient patient;
	patient.TakeMedicine(medicine);
	system("pause");
	return 0;
}
