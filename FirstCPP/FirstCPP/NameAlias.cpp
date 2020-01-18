/*
이름공간 줄여서 호출하기
이름공간은 중첩이 가능합니다.
중첩하기 위해서는 중괄호를 열어 이름공간을 만들고
닫히기 전에 다시 내부에 새로운 중괄호를 열어 이름공간을 추가하는
문법을 사용합니다.
그러나 이렇게 이름공간을 중첩할 경우
이름공간1::이름공간2::이름공간3::요소명;
과 같이 이름공가능ㄹ 중복해서 많이 집어넣어야 하는 경우가 발생합니다.
따라서 이름공간 여럿을 줄여 쓸 수 있도록 별칭을 붙이는 문법을 제공하고
있습니다.
문법은 namespace 별칭 = 이름공간::이름공간2...;
라고 선언하면 그 뒤로는 별칭::요소;와 같이
여러 이름공간을 모두 적지 않고도 별칭으로 대체할 수 있습니다.
*/

#include <iostream>
using namespace std;
namespace A {
	namespace BB {
		namespace  CCC {
			int num1;
			char name[50];
		}
	}
}

int main(void) {
	cout << "변수 num1에 대입할 값을 입력해주세요";
	cin >> A::BB::CCC::num1;
	cout << A::BB::CCC::num1 << endl;

	namespace ABC = A::BB::CCC;
	cout << "변수 name에 대입할 값을 입력해주세요";
	cin >> ABC::name;
	cout << ABC::name << endl;
	cout << ABC::num1 << endl;
	system("pause");
	return 0;
}
