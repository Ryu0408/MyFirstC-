#include <iostream>
/*
	C++�� �Է�
	���� scanf�� ����ϴ� C++�� ǥ��
	�Է¹�ĵ� �����մϴ�.
	std:cin�� �ٷ� �װ����� cin��
	console in�� �����Դϴ�.

	scanf�ʹ� �ٸ��� #DEFINE_CRT_SECURE_NO_WARNINGS���� ����� �� �ִ�
	��ɾ��Դϴ�.

	�ڷ����� ����ڰ� �Է����� �ʾƼ� �����Ǵ� �δ���� ����� �� �ֽ��ϴ�.
*/
int main(void){
	int val1;
	std::cout << "ù ��° ���� �Է�: ";
	std::cin >> val1;

	int val2;
	std::cout << "�� ��° ���� �Է�: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "������� : " << result << std::endl;

	system("pause");
	return 0;
}