
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

#include <iostream>
using namespace std;

class ConstFunction {
private:
	int num;
public:
	ConstFunction(int n)
		:num(n) {
		cout << "��ü ���� �Ϸ�" << num << endl;
	}
	void Add(int n) {
		cout << num << "�� " << n;
		this->num += n;
		cout << "��ŭ ���߽��ϴ�" << endl;
	}
	void ShowData()  const{

		cout << "���� num�� �� : " << num << endl;
		//num+=5; const�� �ٿ��� ���ο�Ҹ� �������� �ʰڽ��ϴٸ�
		//�����߱⋚���� ������ �ٲٸ� �ȵȴ�.
	}
};

int main(void) {
	const ConstFunction c1(1);
	//c1.Add(5);
	c1.ShowData();
	cout << "1�� ��ü �׽�Ʈ �Ϸ�" << endl;

	return 0;
}
