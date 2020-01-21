/*
클래스를 사용하는데 있어서 가장 중요한 개념은 바로 정보은닉입니다.
일반적으로 클래스 내부의 변수는 사용자가 임의대로 변경해서는
안되는 자료들입니다. 그러나 만약 public 접근제한자를 사용해 변수들을
설정한다면 사용자가마음대로 값을 변경할 수 있게됩니다.
그리고 값을 변경하지않는다해도 역시 범위를 벗어나는 값이 들어올 수
있게됩니다.

따라서 일반적으로 변수들은private으로 묶어두게 됩니다.
단 private 으로 묶은 변수들은 외부에서 값을 지정하거나 수정할 수 없으므로,
이런 변수들의 값을 저장하는 함수들을 사용하게 됩니다.
이 함수들은 단순히 값을 저장하는 용도가 아니라, 자료를 저장하기
전 검증하는 용도까지 겸해서 사용하기때문에 중요도가 높습니다.
이런 유형의 함수를가리켜 getter,setter함수라고 부릅니다.
-
또한 클래스의 변수에 사용자가 지정한 다른클래스를 변수로
넣을 수 있다는점도 같이 확인해주시면 더 좋습니다.
*/

#include <iostream>
#include <cstring>
using namespace std;

class Location {
public:
	int x;
	int y;

};

class Rec{
public:
	Location upLeft;
	Location lowRight;
public:
	void ShowRecLoc() {
		cout << "좌상단 점의 좌표 : " << upLeft.x << ",";
		cout << upLeft.y << endl;
		cout << "우하단 점의 좌표 : " << lowRight.x << ",";
		cout << lowRight.y << endl;

	}
};



int main(void) {
	Location p1 = { -3,5 };
	Location p2 = { 4,8 };
	Rec rec = { p2, p1 };
	rec.ShowRecLoc();
	system("pause");
	return 0;
}
