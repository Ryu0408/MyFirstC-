/*
C++���� ����ϴ� �Է� ��Ģ�� ����ؼ� ���� �µ带 �Է��ϸ�
ȭ�� �µ��� �ٲ��ִ� ���α׷��� ��������
ȭ�� -> ���� ��ȯ ������
�����µ� = {ȭ���µ� - 32} / 1.8
���� -> ȭ��
���� * 1.8 + 32 = ȭ��
*/
#include <iostream>
int main(void) {
	double c, f;
	std::cout << "������ ���� �µ���?" << std::endl;
	std::cin >> c;
	f = c * 1.8 + 32;
	std::cout << "ȭ�� �µ��� �ٲٸ� " << f;
	std::cout << "�� �Դϴ�." << std::endl;;
	system("pause");
	return 0;
}