#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class BananaSeller {
private:
	char BANANA_PRICE;
	int banana;
	int money;
public:
	void Init(int price, int n, int m) {
		BANANA_PRICE = price;
		banana = n;
		money = m;
	}
	int SaleBanana(int m) {
		int num = m / BANANA_PRICE;
		banana -= num;
		money += m;
		return num;
	}
	
	void ShowSeller() {
		cout << "바나나 재고 : " << banana << endl;
		cout << "오늘 매출액 : " << money << endl;
	}

};

class BananaBuyer {
	int money;
	int banana;
public:
	void init(int m) {
		money = m;
		banana = 0;
	}
	void BuyBanana(BananaSeller& seller, int m) {
		banana += seller.SaleBanana(m);
		money -= m;
	}

	void ShowBuyer() {
		cout << "구매한 바나나개수 : " << banana << endl;
		cout << "남은 돈 : " << money << endl <<endl;

	}
};

int main(void) {
	BananaSeller seller;
	seller.Init(2000, 10, 0);
	BananaBuyer buyer;
	buyer.init(10000);
	buyer.BuyBanana(seller, 4000);

	cout << "상인의 정보" << endl;
	seller.ShowSeller();
	cout << "구매자의 정보" << endl;
	buyer.ShowBuyer;
	system("pause");
	return 0;
}
