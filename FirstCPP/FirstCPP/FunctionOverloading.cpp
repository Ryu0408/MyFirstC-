#include <iostream>

void Function(void) {
	std::cout << "Fuction(void) called" << std::endl;
}

void Function(char c) {
	std::cout << "Fuction(char c) called" << std::endl;
}

void Function(int a, int b) {
	std::cout << "Fuction(int a, int b) called" << std::endl;
}

int main(void) {
	Function();
	Function('A');
	Function(1, 3);
	system("pause");
	return 0;
}