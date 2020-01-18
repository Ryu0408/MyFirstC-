#include <iostream>

#include <iostream>
namespace student1 {
	void Function(void);
}

namespace student2 {
	void Function(void);
}

namespace student1 {
	void Function2(void);
}

int main(void) {
	student1::Function();
	system("pause");
	return 0;
}

void student1::Function(void) {
	std::cout << "Studente1의 Function 호출" << std::endl;
	Function2();
	student2::Function();
}

void student2::Function(void) {
	std::cout << "Studente2의 Function 호출" << std::endl;
}

void student1::Function2(void) {
	std::cout << "Studente1의 Function2() 호출" << std::endl;
}