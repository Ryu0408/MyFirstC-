#include <iostream>
/*
	C++의 입력
	또한 scanf를 대신하는 C++의 표준
	입력방식도 존재합니다.
	std:cin이 바로 그것으로 cin은
	console in의 약자입니다.

	scanf와는 다르게 #DEFINE_CRT_SECURE_NO_WARNINGS없이 사용할 수 있는
	명령어입니다.

	자료형은 사용자가 입력하지 않아서 지정되니 부담없이 사용할 수 있습니다.
*/
int main(void){
	int val1;
	std::cout << "첫 번째 숫자 입력: ";
	std::cin >> val1;

	int val2;
	std::cout << "두 번째 숫자 입력: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧샘결과 : " << result << std::endl;

	system("pause");
	return 0;
}