/*
�����ڸ� �����ϴ� �Լ�
�����ڸ� �����ϴ� ���� �����ϰ� "������" �� ��ü�� �����մϴ�.
�����ڸ� �����ϴ� ���� �����ڷ� �޴� ����
�����ڸ� �����ϴ� ���� �����ڰ� �ƴѰ����� �޴� ��츦 ���鼭
��� ó���Ǵ����� �ľ��ϼž� �մϴ�.
*/

#include <iostream>
using namespace std;

int& ReturnRef(int& ref) {
	ref++;
	return ref;
}

int main(void) {
	int num1 = 1;
	int& ref1 = ReturnRef(num1);

	num1++;
	ref1++;


	cout << "num1 : " << num1 << endl;
	cout << "ref1 : " << ref1 << endl;
	system("pause");
	return 0;
}
