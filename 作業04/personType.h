# ifndef Person_TYPE
# define Person_TYPE

#include <iostream>
using namespace std;

class personType
{
	public:
		void print() const;
			// output first name �� last name �� function
			// in the form : firstName lastName

		void setName(string first, string last);
			// ���Խ��Ʌ����O�� firstname �c lastname �� funciotn
			// postcondition: firstName = first; lastName = last

		string getFirstName() const;
			// ���Ի؂� first name �� function
			// postcondition: firstName �� value ���� return

		string getLastName() const;
			// ���Ի؂� last name �� function
			// postcondition: lastName �� value ���� return

		personType(string first = "", string last = "");
			// Constructor
			// ��������ȥ�O�� firstName �c lastName
			// �������A�Oֵ(default value)�� null string
			// postcondition: firstName = first; lastName = last


	private:
		string firstName;
		string lastName;
};

#endif
