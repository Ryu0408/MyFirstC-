#include <iostream>
using namespace std;

class Std1;

class Std2 {
private:
	int num2;
	friend class Std1;
public:
	Std2(int n2):num2(n2) {}
	void ShowNum1(Std1& std1);

};

class Std1 {
private:
	int num1;
public:
	Std1(int n1) :num1(n1) {}
	void ShowNum2(Std2& std2);
	friend class Std2;
};
void Std2::ShowNum1(Std1& std1) {
	cout << "Std1의 num1값 : " << std1.num1 << endl;

}

void Std1::ShowNum2(Std2& std2) {
	cout << "Std2의 num2값 : " << std2.num2 << endl;

}
int main(void) {
	Std1 std1(1);
	Std2 std2(2);

	std1.ShowNum2(std2);
	std2.ShowNum1(std1);

	return 0;
}
/*
2.friend키워드
friend키워드는 객체의 private요소에 외부에서 접근할 수 있도록
허용하는 키워드입니다.
friend는 접근당하는쪽에서 허용하는것이지 접근하는쪽에서 선언하는
키워드가 아닙니다.
이 키워드는 특정클래스전체에 허용할수도 있지만,일부 클래스요소나
혹은 전역함수를 대상으로도 사용할 수 있습니다.
*/