/*
4.�Ҹ���
�Ҹ��ڶ� �����ڿ� �ݴ�� ��ü�� ������ �� ȣ��Ǵ� �Լ��Դϴ�.
�Ҹ��ڴ� ����, ���������� ��ü�� �Ҹ�� �� ȣ��Ǹ�
deleteŰ����� �����Ҵ��� ��ü�� �����Ҷ���
Ȥ�� �����Լ���������� ���α׷��� ����� �� �ڵ����� ȣ��˴ϴ�.
VS2019������ ��������� VS2017������ �Ҹ��������� �����ϱ�����
�ణ�� ������ �ʿ��մϴ�.
������Ʈ���� ��Ŭ�� -> �Ӽ� -> ��Ŀ -> �ý��� -> �ܼ�
�� �ɼ� ���� �� �Ҹ��� ������ �����Ǹ� �� �������ʹ�
system("pause");�����������ʾƵ� â�� �ڵ����� ������ �ʽ��ϴ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Man {
private:
	char* name;
	int age;

public:
	Man(const char* n, int a) {
		int length = strlen(n) + 1;
		name = new char[length];
		strcpy(name, n);
		age = a;
	}

	void ShowPersonInfo() {
		cout << "����� ������ :" << name << endl;
		cout << "����� ���̴� :" << age << endl;

	}
	
	//�Ҹ��ڴ� �������� ���ʿ� -�� ���δ�.
	~Man() {
		delete[] name;
		cout << "�Ҹ��� ȣ�� Ȯ��" << endl;
	}
};

int main(void) {
	Man m1("donald trump", 53);
	Man m2("xi jin ping", 42);
	m1.ShowPersonInfo();
	m2.ShowPersonInfo();
	return 0;
}
/*
5.this������
this��� Ű����� ��ü �ڱ��ڽ��� �ǹ��մϴ�.
this�� �������������� Ŭ������ "����������"�� ��޵Ǳ� �����Դϴ�.
-------
this�� �Ϲ������δ� ��ü�ڱ��ڽ��� �ּҸ� ��Ÿ���� �����ͺ�����
��������,�ڱ��ڽ��� �ǹ��Ѵٴ��� ������ ��������� �ʱ�ȭ�ϴµ�
�־���� ��������� �ʱ�ȭ��Ű������ ����ϱ⵵�մϴ�.
---------
*/