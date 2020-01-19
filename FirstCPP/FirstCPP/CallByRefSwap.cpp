/*
3. call-by-ref
�Լ����ο��� �Լ� �ܺο� ������ �ټ� �ִ� ������ �Լ��Դϴ�.
Ÿ��  �ڷẸ�� *������ �ϳ� �� ���� �ڷḦ ����մϴ�.
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
	Swap(&num1, &num2); //num1, num2�� ���� �ٲ�� ����

	printf("num1 num2 : %d %d \n", num1, num2);
	system("pause");
	return 0;
}