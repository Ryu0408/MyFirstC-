/*
�����ڸ� �����ϴ� �Լ�
�����ڸ� �����ϴ� ���� �����ϰ� "������" �� ��ü�� �����մϴ�.
�����ڸ� �����ϴ� ���� �����ڷ� �޴� ����

RefReturnOne.cpp

�����ڸ� �����ϴ� ���� �����ڰ� �ƴѰ����� �޴� ��츦 ���鼭
��� ó���Ǵ����� �ľ��ϼž� �մϴ�.
RefReturnTwo.cpp

���� �Ϲ��ڷ� ������ �Ϲ����� �޴� ������ ����ϼž� �����ڿ� ����
�Ϻ��ϰ� �ľ��� �� �ֽ��ϴ�.
RefReturn3.cpp
*/

#include <iostream>
using namespace std;

int& ReturnRef3(int& ref) {
	ref++;
	return ref;
}

int main(void) {
	int num1 = 1;
	int& num2 = ReturnRef3(num1);

	num1 += 1;
	num2 += 100;


	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
	system("pause");
	return 0;
}
