/*
new키워드와 delete 키워드
C언어에서는 malloc()과 free()를 활용해 각각 동적할당과 해제를 수행했습니다.
int* ptr = (int*)malloc(sizeof(int)*1);
free(ptr);
그러나 C++에서는 new와 delete를 이용해 동적할당과 해제를 담당합니다.
new 키워드는 malloc()키워드와 달리
new 자료형;을 이용해서 자료형과 크기를 한 번에 저장할 수 있습니다.
또한 배열자료형인 경우는 new 자료형[길이];와 같은 문법으로 구현할 수
있습니다.
delete 경우는 free와 달리 역시 함수가 아니며
delete 할당요소;
그리고 할당요소가 배열인 경우는
delete[] 할당요소;와 같은 문법을 사용합니다.
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
