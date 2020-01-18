/*
같은 이름공간 내부의 다른 요소를 호출할 때는 굳이 소속을 밝힐
필요가 없습니다.
*/
#include <iostream>
namespace student1 {
	void Function(void);
}

namespace student2 {
	void Function(void);
}

int main(void) {
	student1::Function();
	student2::Function();
	system("pause");
	return 0;
}

void student1::Function(void) {
	std::cout << "학생1의 함수" << std::endl;
}

void student2::Function(void) {
	std::cout << "학생2의 함수" << std::endl;
}