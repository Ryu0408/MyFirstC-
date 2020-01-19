/*
Bool 자료형
c언어에서는 참 거짓을 나탈때 참은 0이 아닌 모든 숫자로(그러나 컴퓨터가
사용자에 전달할 때는 1로)
거짓은 0으로 표현했습니다.
그러나 이렇게 표현하면 참 거짓을 나타내기가 굉장히 애매합니다.
따라서 c++에서는 bool형 boolean 자료형을 제공합니다.
아에 자료형 자체가 bool이라는 이름을 가지고 있으며 이 자료형의 변수에는
반드시 true 아니면 false를 저장합니다.
이자료는 cout<<endl로 출력시 각각 true는 1, false는 0으로 표현되지만
그렇다고 해서 자료 자체가 1,0정수를 의미하지는 않습니다.

그리고 이 자료는 조건문 등에 조건식 대신 사용할 수도 있습니다.
또한 말 그대로 자료형이기 때문에 return 문의 반환 자료로도 지정하고
사용할 수 있습니다.
*/

#include <iostream>
using namespace std;

bool IsTrue(int num) {
	if (num < 0) return false;
	else return true;
}

int main(void) {
	bool isTrue;
	int num;

	cout << "숫자를 입력해주세요 : ";
	cin >> num;

	isTrue = IsTrue(num);
	if (isTrue) cout << "양수입니다" << endl;
	else cout << "양수가 아닙니다" << endl;

	system("pause");
	return 0;
}
