/*
	�Լ� �����ε��� ����Ʈ �� ������ �������� �� �� ���� �̸��� �Լ���
	ȣ���� �� �ִ� �پ��� ����� ���� �����Ѵٴ� ���Դϴ�.
	�׷��� �������� �����ε��� ���̽����� �ٸ� �ҽ��ڵ带 ������ �� �ִ� �ݸ�
	����Ʈ�� ������ ������ �׻� ���� �ڵ常�� ȣ���� �� �ۿ� �����ϴ�.
*/
#include <iostream>

int BoxVolume(int len, int wid = 1, int hei =1);

int main(void) {
	std::cout << "[3,3,3]:" << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5,5,D]:" << BoxVolume(5, 5) << std::endl;
	std::cout << "[7,D,D]:" << BoxVolume(7) << std::endl;
	system("pause");
	return 0;
}

int BoxVolume(int len, int wid, int hei) {
	return len * wid * hei;
}