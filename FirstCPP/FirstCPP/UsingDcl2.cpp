/*
std:: 역시 이름공간을 나타내는 문법이다.
iostream.h 파일 내부의 std이름공간에 작성되어 있는 변수입니다.
*/

#include <iostream>

using std::cout;
using std::endl;
using std::cin;


int main(void) {
	int num;
	cout << "num 변수에 입력할 값을 작성해주세요" << endl;
	cin >> num;
	cout << "Hello World" << endl;
	cout << "Hello" << "C++" << endl;
	cout << num << 'Z';
	cout << ' ' << 1.234 << endl;
	system("pause");
	return 0;
}
