#include <iostream>
#include "Car.h"

using namespace std;

Car::Car(int x,double y)
	: price_a_day{x},tax{y}{}

void Car::initial() {
	char a;
	cout << "\nWelcome!\n" << endl;
	cout << "\nA)Rent\nB)Price list\nPlease select your process: ";
	cin >> a;
	do {
		if (toupper(a) == 'A')
			Car::rent_selection();
		else if (toupper(a) == 'B')
			Car::buy_selection();
		else {
			cout << "Please enter a valid character: ";
			cin >> a;
		}
	} while (a != 'A' && a != 'B');

}

void Car::rent_selection() {
	string brand;
	int duration = 0;
	cout << "\n\nA) Ford\nB) Mercedes\nC) Rolls Royce\nD) McLaren\nE) Toyota" << endl;
	cout << "Please select the brand of your car: ";
	cin >> brand;
	name = brand;

	cout << "How long do you want to rent the car?(each day costs $100) " << endl;
	cin >> duration;

	price_a_day *= duration;
	tax *= price_a_day;
	cout << "\nTotal cost is: $" << (price_a_day + tax)<< endl;
}
void Car::buy_selection() {
	
	cout << "\nPrice List: " << endl;
	cout << "\nFord = " << ford << endl;
	cout << "Mercedes = " << mercedes << endl;
	cout << "Rolls Royce = " << rolls << endl;
	cout << "McLaren = " << mc << endl;
	cout << "Toyota = " << toyota << endl;

}
Car::~Car(){}