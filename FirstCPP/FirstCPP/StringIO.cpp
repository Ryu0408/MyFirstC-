#include <iostream>

int main() {
	char name[100];
	char lang[200];

	std::cout << "당신의 이름은?";
	std::cin >> name;

	std::cout << "좋아하는 프로그램 언어는?";
	std::cin >> lang;;

	std::cout << "제 이름은" << name << " 입니다 \n";
	std::cout << "제일 좋아하는 언어는 " << lang << "입니다" << std::endl;
	system("pause");
	
	return 0;
}