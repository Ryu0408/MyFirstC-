/*
�����ڸ� �����ϴ� �Լ�
�����ڸ� �����ϴ� ���� �����ϰ� "������" �� ��ü�� �����մϴ�.
�����ڸ� �����ϴ� ���� �����ڷ� �޴� ����
�����ڸ� �����ϴ� ���� �����ڰ� �ƴѰ����� �޴� ��츦 ���鼭
��� ó���Ǵ����� �ľ��ϼž� �մϴ�.
*/

#include <iostream>
using namespace std;

int& ReturnRef2(int& ref) {
	ref++;
	return ref;
}

int main(void) {
	int num1 = 1;
	int num2 = ReturnRef2(num1);

	num1 += 1;
	num2 += 100;


	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
	system("pause");
	return 0;
}
