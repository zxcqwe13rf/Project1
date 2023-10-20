#include "Read.h"
#include <iostream>
using namespace std;

void ReadList(vector<CarInfo>& CarList) {
    ifstream in("in.txt");
    if (!in) exit(-1);
    while (!in.eof()) {
        CarInfo car = CarInfo::ReadCarInfo(in);
        CarList.push_back(car);
    }
    in.close();
}
void PrintList(const vector<CarInfo>& CarList) {
    for (const CarInfo& car : CarList) {
        car.PrintCarInfo();
    }
}