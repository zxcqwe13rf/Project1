#pragma once
#include <iostream>
using namespace std;

struct Date {
    int Day, Month, Year;
    void PrintDate(ostream& out) const;
    static Date ReadDate(istream& in);
};

