/*
4.소멸자
소멸자란 생성자와 반대로 객체가 삭제될 때 호출되는 함수입니다.
소멸자는 직접, 간접적으로 객체가 소멸될 때 호출되며
delete키워드로 동적할당한 객체를 삭제할때나
혹은 메인함수종료로인해 프로그램이 종료될 때 자동으로 호출됩니다.
VS2019에서는 상관없지만 VS2017에서는 소멸자현상을 관찰하기위해
약간의 설정이 필요합니다.
프로젝트파일 우클릭 -> 속성 -> 링커 -> 시스템 -> 콘솔
로 옵션 변경 시 소멸자 현상이 관찰되며 그 시점부터는
system("pause");를기입하지않아도 창이 자동으로 닫히지 않습니다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Man {
private:
	char* name;
	int age;

public:
	Man(const char* n, int a) {
		int length = strlen(n) + 1;
		name = new char[length];
		strcpy(name, n);
		age = a;
	}

	void ShowPersonInfo() {
		cout << "당신의 성함은 :" << name << endl;
		cout << "당신의 나이는 :" << age << endl;

	}
	
	//소멸자는 생성자의 왼쪽에 -를 붙인다.
	~Man() {
		delete[] name;
		cout << "소멸자 호출 확인" << endl;
	}
};

int main(void) {
	Man m1("donald trump", 53);
	Man m2("xi jin ping", 42);
	m1.ShowPersonInfo();
	m2.ShowPersonInfo();
	return 0;
}
/*
5.this포인터
this라는 키워드는 객체 자기자신을 의미합니다.
this가 포인터인이유는 클래스는 "참조형변수"로 취급되기 때문입니다.
-------
this는 일반적으로는 객체자기자신의 주소를 나타내는 포인터변수로
쓰이지만,자기자신을 의미한다는점 때문에 멤버변수를 초기화하는데
있어서보다 명시적으로 초기화시키기위해 사용하기도합니다.
---------
*/