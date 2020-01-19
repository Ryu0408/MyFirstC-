/*
newŰ����� delete Ű����
C������ malloc()�� free()�� Ȱ���� ���� �����Ҵ�� ������ �����߽��ϴ�.
int* ptr = (int*)malloc(sizeof(int)*1);
free(ptr);
�׷��� C++������ new�� delete�� �̿��� �����Ҵ�� ������ ����մϴ�.
new Ű����� malloc()Ű����� �޸�
new �ڷ���;�� �̿��ؼ� �ڷ����� ũ�⸦ �� ���� ������ �� �ֽ��ϴ�.
���� �迭�ڷ����� ���� new �ڷ���[����];�� ���� �������� ������ ��
�ֽ��ϴ�.
delete ���� free�� �޸� ���� �Լ��� �ƴϸ�
delete �Ҵ���;
�׸��� �Ҵ��Ұ� �迭�� ����
delete[] �Ҵ���;�� ���� ������ ����մϴ�.
NewDelete.cpp
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

char* StrAlloc(int len) {
	//char* str = (char*)malloc(sizeof(char)*len);
	char* str = new char[len];
	return str;
}

int main(void) {
	char* str = StrAlloc(30);
	strcpy(str, "C++ new test");

	cout << str << endl;
	//free(str);
	delete[] str;
	system("pause");
	return 0;
}
