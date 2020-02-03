
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

class ConstFunction {
private:
	int num;
public:
	ConstFunction(int n)
		:num(n) {
		cout << "객체 생성 완료" << num << endl;
	}
	void Add(int n) {
		cout << num << "에 " << n;
		this->num += n;
		cout << "만큼 더했습니다" << endl;
	}
	void ShowData()  const{

		cout << "현재 num의 값 : " << num << endl;
		//num+=5; const를 붙여서 내부요소를 변경하지 않겠습니다를
		//선언했기떄문에 내용을 바꾸면 안된다.
	}
};

int main(void) {
	const ConstFunction c1(1);
	//c1.Add(5);
	c1.ShowData();
	cout << "1번 객체 테스트 완료" << endl;

	return 0;
}
