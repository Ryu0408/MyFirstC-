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
#include <iostream>
using namespace std;

class UseThis {
private:
	int num1;
	int num2;

public:
	UseThis(int num1, int num2){
		this->num1 = num1;
		this->num2 = num2;

	}

	void ShowData() {
		cout << num1 << "," << num2 << endl;
	}

};

int main(void) {
	UseThis t1(3, 4);
	t1.ShowData();
	return 0;
}