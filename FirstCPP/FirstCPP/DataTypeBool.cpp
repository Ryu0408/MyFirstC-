/*
Bool �ڷ���
c������ �� ������ ��Ż�� ���� 0�� �ƴ� ��� ���ڷ�(�׷��� ��ǻ�Ͱ�
����ڿ� ������ ���� 1��)
������ 0���� ǥ���߽��ϴ�.
�׷��� �̷��� ǥ���ϸ� �� ������ ��Ÿ���Ⱑ ������ �ָ��մϴ�.
���� c++������ bool�� boolean �ڷ����� �����մϴ�.
�ƿ� �ڷ��� ��ü�� bool�̶�� �̸��� ������ ������ �� �ڷ����� ��������
�ݵ�� true �ƴϸ� false�� �����մϴ�.
���ڷ�� cout<<endl�� ��½� ���� true�� 1, false�� 0���� ǥ��������
�׷��ٰ� �ؼ� �ڷ� ��ü�� 1,0������ �ǹ������� �ʽ��ϴ�.

�׸��� �� �ڷ�� ���ǹ� � ���ǽ� ��� ����� ���� �ֽ��ϴ�.
���� �� �״�� �ڷ����̱� ������ return ���� ��ȯ �ڷ�ε� �����ϰ�
����� �� �ֽ��ϴ�.
*/

#include <iostream>
using namespace std;

bool IsTrue(int num) {
	if (num < 0) return false;
	else return true;
}

int main(void) {
	bool isTrue;
	int num;

	cout << "���ڸ� �Է����ּ��� : ";
	cin >> num;

	isTrue = IsTrue(num);
	if (isTrue) cout << "����Դϴ�" << endl;
	else cout << "����� �ƴմϴ�" << endl;

	system("pause");
	return 0;
}
