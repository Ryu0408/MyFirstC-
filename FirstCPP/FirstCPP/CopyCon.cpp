#include <iostream>
using namespace std;

class CopyCon {
private:
	int num1;
	int num2;
public:
	CopyCon(int num1, int num2) {
		this->num1 = num1;
		this->num2 = num2;
	}
	CopyCon(CopyCon& copycon)
		:num1(copycon.num1), num2(copycon.num2) {
		cout << "복사생성자를 이용한 생성" << endl;
	}
	void ShowData() {
		cout << num1 << endl;
		cout << num2 << endl;

	}
};

int main(void) {
	CopyCon c1(1, 2);
	cout << "일반 생성자 c1 객체 생성" << endl;
	CopyCon c2 = c1;
	cout << "복사 생성자 c2 객체 복사" << endl;
	c1.ShowData();
	c2.ShowData();
	return 0;
}