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

�׸��� �� �ڷ�� ���ǹ�
*/

#include <cstdio>
#include <iostream>
using namespace std;

int main(void) {
	int num = 3;
	int i=0;

	cout << "true : " << true << endl;
	cout << "flase : " << false << endl;

	while (true)
	{
		cout << i++ << ' ';
		if (i > num) break;
	}
	cout << endl;
	cout << "sizeof 1 : " << sizeof(1) << endl;
	cout << "sizeof 0 : " << sizeof(0) << endl;
	cout << "sizeof true : " << sizeof(true) << endl;
	cout << "sizeof false : " << sizeof(false) << endl;
	system("pause");
	return 0;
}
