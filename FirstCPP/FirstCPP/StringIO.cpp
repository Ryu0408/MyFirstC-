#include <iostream>

int main() {
	char name[100];
	char lang[200];

	std::cout << "����� �̸���?";
	std::cin >> name;

	std::cout << "�����ϴ� ���α׷� ����?";
	std::cin >> lang;;

	std::cout << "�� �̸���" << name << " �Դϴ� \n";
	std::cout << "���� �����ϴ� ���� " << lang << "�Դϴ�" << std::endl;
	system("pause");
	
	return 0;
}