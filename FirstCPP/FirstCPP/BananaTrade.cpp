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
		cout << "�ٳ��� ��� : " << banana << endl;
		cout << "���� ����� : " << money << endl;
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
		cout << "������ �ٳ������� : " << banana << endl;
		cout << "���� �� : " << money << endl <<endl;

	}
};

int main(void) {
	BananaSeller seller;
	seller.Init(2000, 10, 0);
	BananaBuyer buyer;
	buyer.init(10000);
	buyer.BuyBanana(seller, 4000);

	cout << "������ ����" << endl;
	seller.ShowSeller();
	cout << "�������� ����" << endl;
	buyer.ShowBuyer;
	system("pause");
	return 0;
}
