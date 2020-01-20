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

#include <iostream>
#include <string.h>
using namespace std;

class Object {
public:
	Object() {
		cout << "생성자 실행!" << endl;
	}
};

int main(void) {
	cout << "malloc을 사용한 객체 생성" << endl;
	Object* ptr1 = (Object*)malloc(sizeof(Object) * 1);

	cout << "new를 사용한 객체 생성" << endl;
	Object* ptr2 = new Object;

	cout << endl << "코드 실행 종료" << endl;
	free(ptr1);
	delete ptr2;
	system("pause");
	return 0;
}
/*
struct 구조체명{
	내부자료;
	....
};
였는데 C++에서도 구조체의 역할은 C언어의 그것과 큰 차이는 없습니다.
그래서 먼저 C언어의 구조체를 살펴보겠습니다.
*/