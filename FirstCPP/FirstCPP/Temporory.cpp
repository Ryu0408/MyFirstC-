#include <iostream>
using namespace std;
/*
1.constŰ����
���� �����ȵ��� constŰ����� const������ ���¿�Ҹ� ���ȭ
���ִ� Ű�����Դϴ�.
���ȭ�� �Ϸ�� Ű����� ���ļ����� �Ұ����մϴ�.

���� constŰ������Լ��� ���� ���� ������ �̷��� ������� ����
���Լ��� �̿��ؼ� �ٸ������� ���������ʰڴٴ��ǹ��Ǽ����̵˴ϴ�.
�׸��� �Լ������ε��� �����
1.�Լ��� �̸��� �ߺ��ɰ� 2.�Լ��� �Ķ������ ������������ �ٸ���
���־��µ�,���3������ constŰ���尡 �����Լ��� �Ⱥ����Լ���
�ٸ������� �Լ��� ���ֵȴٴ� ��Ģ�� �ϳ��� ���ֽ��ϴ�.
*/
class GCTest {
private:
	int num;
public:
	GCTest(int n)
		:num(n) {
		cout << "��ü ���� �� ���� ����:" << num << endl;
	}
	~GCTest() {
		cout << num << "��ü �Ҹ�" << endl;
	}
	void ShowData() {
		cout << "��ü ���ο� ����� ����:" << num << endl;
	}
};

int main(void) {
	GCTest(1);
	cout << "1�� ��ü �׽�Ʈ �Ϸ�" << endl;

	GCTest(2).ShowData();
	cout << "2�� ��ü �׽�Ʈ �Ϸ�" << endl;

	const GCTest& ref = GCTest(3);
	cout << "3�� ��ü �׽�Ʈ �Ϸ�" << endl;
	return 0;
}