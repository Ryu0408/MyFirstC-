#include <iostream>
using namespace std;

class Std1;

class Std2 {
private:
	int num2;
	friend class Std1;
public:
	Std2(int n2):num2(n2) {}
	void ShowNum1(Std1& std1);

};

class Std1 {
private:
	int num1;
public:
	Std1(int n1) :num1(n1) {}
	void ShowNum2(Std2& std2);
	friend class Std2;
};
void Std2::ShowNum1(Std1& std1) {
	cout << "Std1�� num1�� : " << std1.num1 << endl;

}

void Std1::ShowNum2(Std2& std2) {
	cout << "Std2�� num2�� : " << std2.num2 << endl;

}
int main(void) {
	Std1 std1(1);
	Std2 std2(2);

	std1.ShowNum2(std2);
	std2.ShowNum1(std1);

	return 0;
}
/*
2.friendŰ����
friendŰ����� ��ü�� private��ҿ� �ܺο��� ������ �� �ֵ���
����ϴ� Ű�����Դϴ�.
friend�� ���ٴ��ϴ��ʿ��� ����ϴ°����� �����ϴ��ʿ��� �����ϴ�
Ű���尡 �ƴմϴ�.
�� Ű����� Ư��Ŭ������ü�� ����Ҽ��� ������,�Ϻ� Ŭ������ҳ�
Ȥ�� �����Լ��� ������ε� ����� �� �ֽ��ϴ�.
*/