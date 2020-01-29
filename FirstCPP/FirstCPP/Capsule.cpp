#include <iostream>
using namespace std;
class Sinivel {
public:
	void Take() { cout << "콧물처치약 복용" << endl; }
};
class Sneeze {
public:
	void Take() { cout << "재체기 처치약 복용" << endl; }
};
class Snuffle {
public:
	void Take() { cout << "코막힘 처치약 복용" << endl; }
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
