/*
참조자를 리턴하는 함수
참조자를 리턴하는 경우는 간단하게 "변수명" 그 자체를 리턴합니다.
참조자를 리턴하는 것을 참조자로 받는 경우와
참조자를 리턴하는 것을 참조자가 아닌것으로 받는 경우를 보면서
어떻게 처리되는지를 파악하셔야 합니다.
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
