/*
std:: ���� �̸������� ��Ÿ���� �����̴�.
iostream.h ���� ������ std�̸������� �ۼ��Ǿ� �ִ� �����Դϴ�.
*/

#include <iostream>

using std::cout;
using std::endl;
using std::cin;


int main(void) {
	int num;
	cout << "num ������ �Է��� ���� �ۼ����ּ���" << endl;
	cin >> num;
	cout << "Hello World" << endl;
	cout << "Hello" << "C++" << endl;
	cout << num << 'Z';
	cout << ' ' << 1.234 << endl;
	system("pause");
	return 0;
}
