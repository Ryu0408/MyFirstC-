#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Car.h"
using namespace std;

void Car::InitCar(const char * id, int fuel) {
	strcpy(ID, id);
	fuelGauge = fuel;
	curSpeed = 0;
}
void Car::ShowCarState(){
	cout << "ID : " << ID << endl;
	cout << "연료 : " << fuelGauge << "%" <<endl;
	cout << "속도 : " << curSpeed << "km/s" << endl;
}

void Car::Accel() {
	if (fuelGauge <= 0) return;
	else fuelGauge -= CAR_ENUM::FULE_STEP;
	if((curSpeed+ CAR_ENUM::ACC_STEP) >= CAR_ENUM::MAX_SPD){
		curSpeed = CAR_ENUM::MAX_SPD;
	}
	curSpeed += CAR_ENUM::ACC_STEP;
}

void Car::Break() {
	if (curSpeed < CAR_ENUM::BRK_STEP) {
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_ENUM::BRK_STEP;
}