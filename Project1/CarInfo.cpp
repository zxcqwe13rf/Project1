#include "CarInfo.h"
#include "Date.h"
#include <iostream>
using namespace std;

CarInfo CarInfo::ReadCarInfo(istream& in){
	CarInfo car;
	car.date = Date::ReadDate(in);
	in >> car.number;
	return car;
}
void CarInfo::PrintCarInfo() const {
	cout << "Date: ";
	date.PrintDate(cout);
	cout << " Number: " << number << endl;
}