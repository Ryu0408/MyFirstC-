/*
2.��������� ��������.
������������ �ڱ��ڽ��� ����ִ� �ڷ�� �ּҰ����� �����ڷᰡ �ƴմϴ�.
�� �����ڷ�� ������ü�� ����ִ� �ڷᰡ �ٸ����ε� ��������� ������
�ִ� �ڷḸ �״�� �����ϴ� ����� �ǹ��մϴ�.
�� ��� ������ ����Ǿ� �ִ� �Ϲ� �ڷ�� �Ϲ� �ڷ��� ������
�̷��������, �ݸ鿡 ������ ����Ǿ��ִ� "�ּҰ�" ���� �ּҰ����μ�
������ �� �� �����ּҿ� ���������� ����� �� �ִ��ڷῡ ���� ������
�̷������� ���ϴ�.
�� ��������� ������ ���翡�� �׸鰡 �״�� ������ ������ �ִ� �ڷḦ
������ �� �߻��Ѵٰ� �� �� �ֽ��ϴ�.

�ݸ鿡 ��������� �⺻�������� �ڷḦ �����ϴ°��� ������,������������
������ ����ִ� �ּҰ������� ���簡�ƴѵ���ִ� �ּҷ� ����������
������ �������� �ڷḦ �����ϴ� �����Դϴ�.
�Ϲ������ο츮�� �����Ѵٶ�� ǥ���Ҷ��� �������縦 �ǹ��ϴ� ��찡 �����Ƿ� �� �� ������ �и��ؼ� �����ϴ� �����߿��մ� ��
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Computer {
	char* model;
	int ssd;
	int ram;
public:
	Computer(const char* modelname, int ssd, int ram) {
		int len = strlen(modelname) + 1;
		model = new char[len];
		strcpy(model, modelname);
		this->ssd = ssd;
		this->ram = ram;
	}
	
	void ShowComputer() {
		cout << "�𵨸� : " << model << endl;
		cout << "ssd : " << ssd << "gb" << endl;
		cout << "ram : " << ram << "gb" << endl;

	}
	~Computer() {
		delete[] model;
		cout << "��ǻ�� ��ü�� ���Ǿ����ϴ�," << endl;
	}
};

int main(void) {
	Computer c1("AMD", 500, 30);
	Computer c2 = c1;
	c1.ShowComputer();
	c2.ShowComputer();
	return 0;
}