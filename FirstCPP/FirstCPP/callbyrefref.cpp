/*
참조자란?
참조자는 변수에 붙여주는 일종의 별명입니다.
특정 변수에 참조자를 붙여주면 그 때부터 그 변수는 마치 이름이 2개가
된 것처럼 사용할 수 있습니다.
참조자 문법은
자료형 & 참조자명 = 변수명;
과 같이 사용할 경우 특정 변수에 참조자가 부여됩니다.
또한 참조자는 몇 개를 붙여도 제약이 없습니다.

또한 참조자는 변수 성향을 가진 자료이기만 하면 어디에도 붙일 수 있습니다.
단, 참조자는 선언과 동시에 타겟자료를 지정해줘야 하며
미리 선언만 해뒀다가 나중에 참조자를 이용하는 것은 불가능합니다.

포인트 변수도 변수이기 때문에 참조자를 부여할 수 있습니다.
포인터변수에 사용하는 참조자도 크게 다른점은 없습니다.

참조자를 이용해서 포인터변수 없이 Call-by-ref를 구현할 수 있습니다.
*/


#include <iostream>
using namespace std;

void Swap(int& ref1, int& ref2) {
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main(void) {
	int num1 = 1;
	int num2 = 2;

	Swap(num1, num2);
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
	system("pause");
	return 0;
}
