
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

class ConstOver {
private:
	int num;
public:
	ConstOver(int n)
		:num(n) {
		cout << "��ü ���� �Ϸ�" << num << endl;
	}
	void Add(int n) {
		cout << num << "�� " << n << "���ϱ� �Ϸ�" << endl;
		this->num += n;
	}
	void ShowData() {

		cout << "const�� ���� �Լ� : " << num << endl;

	}
	void ShowData()  const {

		cout << "const�� �ִ� �Լ� : " << num << endl;

	}
};

int main(void) {
	ConstOver c1(1);
	const ConstOver c2(2);

	c1.Add(5);
	//c2.Add(1); const�ٿ��� ����ȵ�
	c1.ShowData();
	c2.ShowData();
	return 0;
}
/*
2.friendŰ����
friendŰ����� ��ü�� private��ҿ� �ܺο��� ������ �� �ֵ��� 
����ϴ� Ű�����Դϴ�.
friend�� ���ٴ��ϴ��ʿ��� ����ϴ°����� �����ϴ��ʿ��� �����ϴ� 
Ű���尡 �ƴմϴ�.
�� Ű����� Ư��Ŭ������ü�� ����Ҽ��� ������,�Ϻ� Ŭ������ҳ� 
Ȥ�� �����Լ��� ������ε� ����� �� �ֽ��ϴ�.
*/