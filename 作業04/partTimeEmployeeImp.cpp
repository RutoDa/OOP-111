# include "partTimeEmployee.h"
# include "personType.h"
# include <iostream>
using namespace std;

void partTimeEmployee::print() const
{
	personType::print(); // 利用父類別的 member function 去 print 員工的姓名
	cout << "'s wages are: $" << calculatePay() << endl;
}

double partTimeEmployee::calculatePay() const
{
	return (payRate * hoursWorked);
}

void partTimeEmployee::setNameRateHours(string first, string last, double rate, double hours)
{
	personType::setName(first, last);
	payRate = rate;
	hoursWorked = hours;
}

partTimeEmployee::partTimeEmployee(string first, string last, double rate, double hours):personType(first, last)
{
	if (rate >= 0)
		payRate = rate;
	else
		payRate = 0;

	if (hours >= 0)
		hoursWorked = hours;
	else
		hoursWorked = 0;
}


