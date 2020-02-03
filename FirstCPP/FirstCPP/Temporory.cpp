#include <iostream>
using namespace std;
/*
임시변수와 가비지 컬렉션
임시변수란 new키워드를 이용해서 객체를 생성하되 객체에 이름을 부여하지
않은 것 입니다.
이름을 부여받지 못한 변수는 다시 실행될 여지가 없으므로 세미콜론을
만나기 전까지만 메모리상에 존재합니다.
그리고 세미콜론을 만났을때컴 퓨터가 다시호출될 여지가 있는지 없는지를
검사한 다음 다시 호출될 여지가 없다면 바로 메모리상에서 삭제해버립니다.
이렇게 자동으로 쓸데없는 변수를 메모리상에서 삭제하는 작업을 가리켜
가비지컬렉션(쓰레기수집)이라고부르며
이런 작업은C++뿐만 아니라 자바, 파이썬등에서도 자동으로 진행해줍니다.
이작업은 메모리공간을 최대한 효율적으로 사용하기위해 나온개념 입니다
*/
class GCTest {
private:
	int num;
public:
	GCTest(int n)
		:num(n) {
		cout << "객체 생성 및 숫자 대입:" << num << endl;
	}
	~GCTest() {
		cout << num << "객체 소멸" << endl;
	}
	void ShowData() {
		cout << "객체 내부에 저장된 숫자:" << num << endl;
	}
};

int main(void) {
	GCTest(1);
	cout << "1번 객체 테스트 완료" << endl;

	GCTest(2).ShowData();
	cout << "2번 객체 테스트 완료" << endl;

	const GCTest& ref = GCTest(3);
	cout << "3번 객체 테스트 완료" << endl;
	return 0;
}
