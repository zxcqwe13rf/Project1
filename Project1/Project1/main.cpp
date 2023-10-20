#include <iostream>
#include <locale>
#include <fstream>
#include <vector>
#include "CarInfo.h"
#include "Read.h"
using namespace std;

int main() {
    vector <CarInfo> CarList;
    ReadList(CarList);
    PrintList(CarList);
    return 0;
}