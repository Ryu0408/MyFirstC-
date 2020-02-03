
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

#include <iostream>
using namespace std;

class ConstOver {
private:
	int num;
public:
	ConstOver(int n)
		:num(n) {
		cout << "객체 생성 완료" << num << endl;
	}
	void Add(int n) {
		cout << num << "에 " << n << "더하기 완료" << endl;
		this->num += n;
	}
	void ShowData() {

		cout << "const가 없는 함수 : " << num << endl;

	}
	void ShowData()  const {

		cout << "const가 있는 함수 : " << num << endl;

	}
};

int main(void) {
	ConstOver c1(1);
	const ConstOver c2(2);
	c1.ShowData();
	c2.ShowData();
	return 0;
}
