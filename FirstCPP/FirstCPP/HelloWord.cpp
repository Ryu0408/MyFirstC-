#include <iostream>
//C++의 표준 헤더파일은 iostream.h
//단, c++에서는 표준 헤더파일의 확장자를 생략한다.

int main(void) {
	int num = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello "<< "World!" <<std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	system("pause");
	return 0;


}