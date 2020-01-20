#include <iostream>
#include "Car.h"


int main(void) {
	Car car1;
	car1.InitCar("gogo12", 100);
	car1.Accel();
	car1.Accel();
	car1.Accel();
	car1.Accel();
	car1.Break();
	car1.ShowCarState();
	system("pause");
	return 0;
}
