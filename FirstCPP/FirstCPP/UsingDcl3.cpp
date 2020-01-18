/*
요소를 하나하나 입력하기 귀찮다면 마지막으로
이름공간 자체를 생략의 대상으로 삼을 수 있습니다.
*/

#include <iostream>

using namespace std;


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
