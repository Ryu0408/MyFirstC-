/*
이름공간
서로 다른 회사에서 합작 프로젝트를 진행한다고 가정해보겠습니다.
보통 회사들은 자기들만의 코딩 컨벤션(코딩 규칙)을 가지고 있는데
예를들어 특정 이름의 변수를 항상 같은 의미로 사용하는 등의 종류입니다.

이 때 서로 다른 회사의 코드를 합치면 다른 기능의 변수의 이름이 겹칠 우려가
있습니다. 따라서 변수에 소속을 부여하거나 라벨링을 하는것이 바로 이름공간의
설정이라고 볼 수 있습니다.
이름공간은
namespace 이름공간명(
	내부요소(변수, 함수 모두 가능)
문법을 사용합니다.
*/

#include <iostream>
namespace ACompany {
	void gold(int g){
		std::cout << "현재 유저가 가진 골드는 : ";
		std::cout << g << "골드입니다." << std::endl;
	}
}

namespace BCompany {
	void gold(int g){
		std::cout << "현재 몬스터가 드랍하는 골드는 : ";
		std::cout << g << "골드입니다." <<  std::endl;
	}
}

int main(void) {
	ACompany::gold(100);
	BCompany::gold(5);
	system("pause");
	return 0;
}