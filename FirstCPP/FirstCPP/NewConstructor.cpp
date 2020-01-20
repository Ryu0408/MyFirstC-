/*
newŰ����� delete Ű����
C������ malloc()�� free()�� Ȱ���� ���� �����Ҵ�� ������ �����߽��ϴ�.
int* ptr = (int*)malloc(sizeof(int)*1);
free(ptr);
�׷��� C++������ new�� delete�� �̿��� �����Ҵ�� ������ ����մϴ�.
new Ű����� malloc()Ű����� �޸�
new �ڷ���;�� �̿��ؼ� �ڷ����� ũ�⸦ �� ���� ������ �� �ֽ��ϴ�.
���� �迭�ڷ����� ���� new �ڷ���[����];�� ���� �������� ������ ��
�ֽ��ϴ�.
delete ���� free�� �޸� ���� �Լ��� �ƴϸ�
delete �Ҵ���;
�׸��� �Ҵ��Ұ� �迭�� ����
delete[] �Ҵ���;�� ���� ������ ����մϴ�.
NewDelete.cpp
*/

#include <iostream>
#include <string.h>
using namespace std;

class Object {
public:
	Object() {
		cout << "������ ����!" << endl;
	}
};

int main(void) {
	cout << "malloc�� ����� ��ü ����" << endl;
	Object* ptr1 = (Object*)malloc(sizeof(Object) * 1);

	cout << "new�� ����� ��ü ����" << endl;
	Object* ptr2 = new Object;

	cout << endl << "�ڵ� ���� ����" << endl;
	free(ptr1);
	delete ptr2;
	system("pause");
	return 0;
}
/*
struct ����ü��{
	�����ڷ�;
	....
};
���µ� C++������ ����ü�� ������ C����� �װͰ� ū ���̴� �����ϴ�.
�׷��� ���� C����� ����ü�� ���캸�ڽ��ϴ�.
*/