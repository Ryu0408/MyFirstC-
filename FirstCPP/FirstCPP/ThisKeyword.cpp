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
#include <iostream>
using namespace std;

class ThisTest {
	int num;
public:
	ThisTest(int n) : num(n) {
		cout << "num�� �� : " << num << endl;
		cout << "this�� �� : " << this << endl << endl;
	}

	void ShowNum() {
		cout << num << endl << endl;
	}

	ThisTest* GetThis() {
		return this;
	}
};

int main(void) {
	ThisTest t1(1);
	ThisTest* ptr1 = t1.GetThis();
	cout << ptr1 << endl;
	ptr1->ShowNum();

	ThisTest t2(2);
	ThisTest* ptr2 = t2.GetThis();
	cout << ptr2 << endl;
	ptr1->ShowNum();
	return 0;
}