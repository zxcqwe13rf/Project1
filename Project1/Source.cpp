#include <iostream>
#include <fstream>
#include <vector>
#include "Source.h"
using namespace std;
struct Date {
    int Day, Month, Year;
    char dot;
};
struct CarInfo {
    Date date;
    string number;
};

int main() {
    ifstream in("in.txt");
    if (!in.is_open()) return -1;
    vector<CarInfo> CarList; 
    CarInfo car;
    while (in >> car.date.Day >> car.date.dot >> car.date.Month >> car.date.dot >> car.date.Year >> car.number) {
        CarList.push_back(car);
    }
    in.close();
    for (const CarInfo car : CarList) {
        cout << "Date: " << car.date.Day << car.date.dot << car.date.Month << car.date.dot << car.date.Year << ", Number: " << car.number << endl;
    }
    return 0;
}