/*
	C++의 지역변수
	C++의 지역변수는 이제 더이상 함수 최상단엥만 선언하지 않아도 됩니다.
	코드의 아무곳에서나 선언이 가능하며 심지어 for문 내부 등에서도
	선언할 수 있습니다.
*/

#include <iostream>

int main(void) {
	int val1, val2;
	int result = 0;
	std::cout << "두 개의 숫자 입력: ";
	std::cin >> val1 >> val2;

	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++) result += i;
	}
	else {
		for (int i = val2 + 1; i < val1; i++) result += i;
	}

	std::cout << "두 수 사이의 정수 합: " << result << std::endl;
	system("pause");
	return 0;
}	