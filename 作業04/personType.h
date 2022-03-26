# ifndef Person_TYPE
# define Person_TYPE

#include <iostream>
using namespace std;

class personType
{
	public:
		void print() const;
			// output first name 跟 last name 的 function
			// in the form : firstName lastName

		void setName(string first, string last);
			// 可以藉由參數設定 firstname 與 lastname 的 funciotn
			// postcondition: firstName = first; lastName = last

		string getFirstName() const;
			// 可以回傳 first name 的 function
			// postcondition: firstName 的 value 會被 return

		string getLastName() const;
			// 可以回傳 last name 的 function
			// postcondition: lastName 的 value 會被 return

		personType(string first = "", string last = "");
			// Constructor
			// 根據參數去設定 firstName 與 lastName
			// 參數的預設值(default value)為 null string
			// postcondition: firstName = first; lastName = last


	private:
		string firstName;
		string lastName;
};

#endif
