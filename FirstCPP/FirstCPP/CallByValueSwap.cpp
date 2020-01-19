/*
1. const Ű������ �ǹ�
const Ű����� ������ ���� �ڷḦ �����ڷ�� ����� �ݴϴ�.
�����ڷ�� ���� ������ �� �����ϴ�.

const�� ����� ������, �Ϲ��ڷᰡ �� �� �ֽ��ϴ�.

2. call-by-value
call-by-value�� �Լ� ���ο��� �Լ� �ܺο� ������ �� �� ���� ������ �Լ�
Ÿ�� �ڷ�� ���� �ڷ����� ����մϴ�.

3. call-by-ref
�Լ����ο��� �Լ� �ܺο� ������ �ټ� �ִ� ������ �Լ��Դϴ�.
Ÿ��  �ڷẸ�� *������ �ϳ� �� ���� �ڷḦ ����մϴ�.
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
	Swap(num1, num2); //num1, num2�� ���� �ٲ�� ����
	printf("num1 num2 : %d %d \n", num1, num2);
	system("pause");
	return 0;
}