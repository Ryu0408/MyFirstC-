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

class UseThis {
private:
	int num1;
	int num2;

public:
	UseThis(int num1, int num2){
		this->num1 = num1;
		this->num2 = num2;

	}

	void ShowData() {
		cout << num1 << "," << num2 << endl;
	}

};

int main(void) {
	UseThis t1(3, 4);
	t1.ShowData();
	return 0;
}