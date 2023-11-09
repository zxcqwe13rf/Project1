#include "Read.h"
#include <iostream>
using namespace std;

void ReadList(vector<CarInfo>& CarList, istream& in) {
    while (!in.eof()) {
        CarInfo car = CarInfo::ReadCarInfo(in);
        CarList.push_back(car);
    }
}
void PrintList(const vector<CarInfo>& CarList) {
    for (const CarInfo& car : CarList) {
        car.PrintCarInfo();
    }
}