#pragma once
#include <iostream>
#include <string>

using namespace std;

class Car {
private:
	string name;
	int price_a_day = 0, ford = 12000, mercedes = 24000, rolls = 42000, mc = 40000, toyota = 10000;
	double tax;
public:
	Car(int,double);
	void initial();
	void rent_selection();
	void buy_selection();
	~Car();
};