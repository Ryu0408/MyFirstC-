#include <iostream>
using namespace std;
/*
1.const키워드
전에 설명드렸듯이 const키워드는 const다음에 오는요소를 상수화
해주는 키워드입니다.
상수화가 완료된 키워드는 이후수정이 불가능합니다.

또한 const키워드는함수에 붙일 수도 있으며 이렇게 사용했을 경우는
이함수를 이용해서 다른변수를 변경하지않겠다는의미의선언이됩니다.
그리고 함수오버로딩의 요건중
1.함수의 이름이 중복될것 2.함수의 파라미터의 종류나갯수는 다를것
이있었는데,사실3번으로 const키워드가 붙은함수와 안붙은함수는
다른종류의 함수로 간주된다는 법칙이 하나가 더있습니다.
*/
class GCTest {
private:
	int num;
public:
	GCTest(int n)
		:num(n) {
		cout << "객체 생성 및 숫자 대입:" << num << endl;
	}
	~GCTest() {
		cout << num << "객체 소멸" << endl;
	}
	void ShowData() {
		cout << "객체 내부에 저장된 숫자:" << num << endl;
	}
};

int main(void) {
	GCTest(1);
	cout << "1번 객체 테스트 완료" << endl;

	GCTest(2).ShowData();
	cout << "2번 객체 테스트 완료" << endl;

	const GCTest& ref = GCTest(3);
	cout << "3번 객체 테스트 완료" << endl;
	return 0;
}