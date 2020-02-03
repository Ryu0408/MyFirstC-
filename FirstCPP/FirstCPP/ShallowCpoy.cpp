/*
2.깊은복사와 얕은복사.
참조형변수는 자기자신이 들고있는 자료는 주소값이지 실제자료가 아닙니다.
즉 실제자료와 변수자체가 들고있는 자료가 다른것인데 얕은복사란 변수에
있는 자료만 그대로 복사하는 방식을 의미합니다.
이 경우 변수에 저장되어 있던 일반 자료는 일반 자료대로 전달이
이루어지지만, 반면에 변수에 저장되어있던 "주소값" 역시 주소값으로서
만전달 될 뿐 실제주소에 접근했을때 사용할 수 있는자료에 대한 접근은
이뤄지지않 습니다.
즉 얕은복사란 변수간 복사에서 액면가 그대로 변수가 가지고 있는 자료를
복사할 때 발생한다고 할 수 있습니다.

반면에 깊은복사란 기본형변수는 자료를 복사하는것이 맞으나,참조형변수는
변수가 들고있는 주소값에대한 복사가아닌들고있는 주소로 접근했을때
실제로 보여지는 자료를 복사하는 개념입니다.
일반적으로우리가 복사한다라고 표현할때는 깊은복사를 의미하는 경우가 많으므로 이 두 개념을 분리해서 이해하는 것이중요합니 다
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Computer {
	char* model;
	int ssd;
	int ram;
public:
	Computer(const char* modelname, int ssd, int ram) {
		int len = strlen(modelname) + 1;
		model = new char[len];
		strcpy(model, modelname);
		this->ssd = ssd;
		this->ram = ram;
	}
	
	void ShowComputer() {
		cout << "모델명 : " << model << endl;
		cout << "ssd : " << ssd << "gb" << endl;
		cout << "ram : " << ram << "gb" << endl;

	}
	~Computer() {
		delete[] model;
		cout << "컴퓨터 객체가 폐기되었습니다," << endl;
	}
};

int main(void) {
	Computer c1("AMD", 500, 30);
	Computer c2 = c1;
	c1.ShowComputer();
	c2.ShowComputer();
	return 0;
}