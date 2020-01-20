/*
헤더파일, 소스파일, 메인파일 변환
클래스를 만들면서부터 파일의 규모가 점점 커지기 때문에
그냥 중구난방식으로 만들면 관리에 어려움을 겪을 수 있습니다.
그래서 코드를 나눠서 관리하게 됩니다.
먼저 헤더파일은 .h로 끝나는 파일입니다.
헤더파일 내부에는 "선언할 수 있는 모든 요소"를 선언합니다.
단 변수도 그렇도 함수도 그렇고 선언ㅁ나 해 두고 정ㄷ의를 하지는
않습니다.
헤더파일의 상단에는 #ifndef 와 #define을 사용해 시작을 알리고
끝에는 #endif를 이용해 끝나는 지점을 알립니다.
소스파일 내부에는 "헤더파일에서 선언한 모든것"을 정의합니다.
이를 위해 소스파일 내부에는 헤더파일을 전처리기 #include를 이용해
받아옵니다.
마지막으로 메인파일 내부에는 오로지 실행에 관련된 내용만 적습니다.
역시 #include 전처리기를 이용해 헤더파일을 받아옵니다.

*/
#ifndef __CAR_H__
#define __CAR_H__

namespace CAR_ENUM {
	enum {
		ID_LEN = 20,
		MAX_SPD = 200,
		FULE_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

class Car {
private:
	char ID[20];
	int fuelGauge;
	int curSpeed;
public:
	void InitCar(const char* id, int fuel);
	void ShowCarState();
	void Accel();
	void Break();

};
#endif