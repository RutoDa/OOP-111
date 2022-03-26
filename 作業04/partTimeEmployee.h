# ifndef PartTimeEMPLOYEE
# define PartTimeEMPLOYEE
# include "personType.h"
# include <iostream>
using namespace std;

class partTimeEmployee: public personType
{
	public:
		void print() const;
		// output first name 、 last name 與 wages 的 function
		// in the form : firstName lastName wages are $$$$.$$

		double calculatePay() const;
		// 計算並回傳 wages 的 function
		// Postcondition: Pay 會被計算後回傳

		void setNameRateHours(string first, string last, double rate, double hours);
		// 藉由參數設定 first name, last name, payRate 與 hoursWorked 的 function
		// Postcondition: firstName = first; lastName = last; payRate = rate; hoursWorked = hours;

		partTimeEmployee(string first = "", string last = "", double rate = 0, double hours = 0);
		// Constructor
		// 藉由參數設定 first name, last name, payRate 與 hoursWorked
		// 如果沒有參數，則會參數皆會設為預設值
		//  Postcondition: firstName = first; lastName = last; payRate = rate; hoursWorked = hours;

	private:
		double payRate;
		double hoursWorked;
};

#endif
