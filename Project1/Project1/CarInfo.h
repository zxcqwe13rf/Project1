#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Date.h"
using namespace std;

struct CarInfo {
    Date date;
    string number;
    static CarInfo ReadCarInfo(istream& in);
    void PrintCarInfo() const;
};
