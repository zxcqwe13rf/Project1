#ifndef DATA_H
#define DATA_H
#include <vector>
#include <fstream>
#include "CarInfo.h"
using namespace std;

void ReadList(vector<CarInfo>& CarList);
void PrintList(const vector<CarInfo>& CarList);
#endif