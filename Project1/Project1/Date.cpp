#include "Date.h"
#include <iostream>
using namespace std;

void Date::PrintDate(ostream& out) const{
	out << Day << '.' << Month << '.' << Year;
 }

Date Date::ReadDate(istream& in) {
	Date res;
	in >> res.Day;
	in.get();
	in >> res.Month;
	in.get();
	in >> res.Year;
	in.get();
	return res;
}