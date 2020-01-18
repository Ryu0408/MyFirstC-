/*
	함수 오버로딩과 디폴트 값 설정의 공통점은 둘 다 같은 이름의 함수를
	호출할 수 있는 다양한 경우의 수를 제공한다는 것입니다.
	그러나 차이점은 오버로딩은 케이스별로 다른 소스코드를 실행할 수 있는 반면
	디폴트값 설정은 무조건 항상 같은 코드만을 호출할 수 밖에 없습니다.
*/
#include <iostream>

int BoxVolume(int len, int wid = 1, int hei =1);

int main(void) {
	std::cout << "[3,3,3]:" << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5,5,D]:" << BoxVolume(5, 5) << std::endl;
	std::cout << "[7,D,D]:" << BoxVolume(7) << std::endl;
	system("pause");
	return 0;
}

int BoxVolume(int len, int wid, int hei) {
	return len * wid * hei;
}