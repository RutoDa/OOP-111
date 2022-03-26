# ifndef PartTimeEMPLOYEE
# define PartTimeEMPLOYEE
# include "personType.h"
# include <iostream>
using namespace std;

class partTimeEmployee: public personType
{
	public:
		void print() const;
		// output first name �� last name �c wages �� function
		// in the form : firstName lastName wages are $$$$.$$

		double calculatePay() const;
		// Ӌ��K�؂� wages �� function
		// Postcondition: Pay ����Ӌ����؂�

		void setNameRateHours(string first, string last, double rate, double hours);
		// ���Ʌ����O�� first name, last name, payRate �c hoursWorked �� function
		// Postcondition: firstName = first; lastName = last; payRate = rate; hoursWorked = hours;

		partTimeEmployee(string first = "", string last = "", double rate = 0, double hours = 0);
		// Constructor
		// ���Ʌ����O�� first name, last name, payRate �c hoursWorked
		// ����]�Ѕ������t�������ԕ��O���A�Oֵ
		//  Postcondition: firstName = first; lastName = last; payRate = rate; hoursWorked = hours;

	private:
		double payRate;
		double hoursWorked;
};

#endif
