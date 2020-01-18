/*
함수의 매개변수 디폴트 값

함수의 매개변수 디폴트 값이란 함수를 실행할 때 입력할 값을 자동으로
배정하는 기능을 의미합니다.

원래 함수 호출시는 함수가 요구하는 매개변수를 반드시 입력해줘야
하지만, 매개변수 디폴트값을 설정했을때는 매개변수 입력시 입력한 값으로
실행, 설정하지 않을때는 지정된 디폴트 값으로 간주하고 실행합니다.
*/

#include <iostream>
int Add(int a = 1, int b = 2) {
	return a + b;
}

int main(void) {
	std::cout << Add() << std::endl;
	std::cout << Add(5) << std::endl;
	std::cout << Add(10, 20) << std::endl;
	system("pause");
	return 0;
}