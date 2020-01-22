/*2.캡슐화
사용자가 어떤 클래스여럿을 사용하거나 사용이 복잡한 클래스를 
사용해야한다면 사용자가 복잡한 사용법을 모두 익혀야합니다.
따라서 이런 불편함을 해소하기 위해 사용로직을 모두 하나의 클래스에 
집어넣은 것을 캡슐화라고 합니다.

캡슐화가 완료된 클래스는 사용자가 사용하는데 있어서 복잡한 
사용법이 아닌 간단한 사용법만 익혀도되므로 편의성이 증대됩니다.
또한 잘못된 실행로직을 실행할 우려가 없으므로 실행안정성도 같이 
증가합니다.
*/

#include <iostream>
using namespace std;

class Sinivel {
public:
	void Take() { cout << "콧물 처치약" << endl; }
};

class Sneeze {
public:
	void Take() { cout << "제체기 처치약" << endl; }
};

class Snuffle {
public:
	void Take() { cout << "코막힘 처치약" << endl; }
};

class Patient {
public:
	void TakeSnivel(Sinivel& cap) { cap.Take(); }
	void TakeSneeze(Sneeze& cap) { cap.Take(); }
	void TakeSnuffle(Snuffle& cap) {cap.Take(); }

};

int main(void) {
	Sinivel sinivel;
	Sneeze sneeze;
	Snuffle snuffle;

	Patient patient;
	patient.TakeSneeze(sneeze);
	patient.TakeSnivel(sinivel);
	patient.TakeSnuffle(snuffle);
	system("pause");
	return 0;
}