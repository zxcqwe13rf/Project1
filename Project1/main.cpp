#include <iostream>
#include <locale>
#include <fstream>
#include <vector>
#include "CarInfo.h"
#include "Read.h"
using namespace std;

int main() {
    ifstream in("in.txt");
    if (!in) return -1;
    vector <CarInfo> CarList;
    ReadList(CarList);
    PrintList(CarList);
    in.close();
    return 0;
}