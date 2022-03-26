#include <iostream>
#include <string>
#include "partTimeEmployee.h"

using namespace std;

int main()
{
	partTimeEmployee newEmp("Yu-Yu", "LEE", 3000, 48);
	newEmp.print();
	newEmp.setNameRateHours("UU", "Li", 9999, 48);
	newEmp.print();
	return 0;
}
