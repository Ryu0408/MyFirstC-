/*
1. const 키워드의 의미
const 키워드는 우측에 오는 자료를 고정자료로 만들어 줍니다.
고정자료는 값을 변경할 수 없습니다.

const의 대상은 포인터, 일반자료가 될 수 있습니다.

2. call-by-value
call-by-value는 함수 내부에서 함수 외부에 영향을 줄 수 없는 유형의 함수
타겟 자료와 같은 자료형을 사용합니다.

3. call-by-ref
함수내부에서 함수 외부에 영향을 줄수 있는 유형의 함수입니다.
타겟  자료보다 *갯수가 하나 더 많은 자료를 사용합니다.
*/

#include <cstdio>
#include <iostream>

void Swap(int n1, int n2) {
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("n1 n2 : %d %d \n", n1, n2);

}

int main(void) {
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2 : %d %d \n", num1, num2);
	Swap(num1, num2); //num1, num2의 값이 바뀌도록 실행
	printf("num1 num2 : %d %d \n", num1, num2);
	system("pause");
	return 0;
}