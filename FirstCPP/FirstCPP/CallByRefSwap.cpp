/*
3. call-by-ref
함수내부에서 함수 외부에 영향을 줄수 있는 유형의 함수입니다.
타겟  자료보다 *갯수가 하나 더 많은 자료를 사용합니다.
*/

#include <cstdio>
#include <iostream>

void Swap(int* ptr1, int* ptr2) {
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main(void) {
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2 : %d %d \n", num1, num2);
	Swap(&num1, &num2); //num1, num2의 값이 바뀌도록 실행

	printf("num1 num2 : %d %d \n", num1, num2);
	system("pause");
	return 0;
}