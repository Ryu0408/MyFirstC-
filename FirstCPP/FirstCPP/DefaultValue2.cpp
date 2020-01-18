#include <iostream>

int Add(int num1 = 1, int num2 = 2);

int main(void) {
	std::cout << Add() << std::endl;
	std::cout << Add(5) << std::endl;
	std::cout << Add(10, 20) << std::endl;
	system("pause");
	return 0;
}

int Add(int num1, int num2) {
	return num1 + num2;
}