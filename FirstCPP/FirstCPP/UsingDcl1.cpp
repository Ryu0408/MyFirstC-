#include <iostream>
#include <iostream>

#include <iostream>
namespace Student {
	void Function(void) {
		std::cout << "Simple Function" << std::endl;
		std::cout << "Student's Function" << std::endl;
	}
}

int main(void) {
	using Student::Function;
	Student::Function();
	Function();
	system("pause");
	return 0;
}
