#include <iostream>
#include <string> 

using namespace std;

class romanType
{
};

int main() {

	romanType *roman;
	string str;

	for(int i = 0; cin >> str; i++) {

		if(i % 2) {

			roman = new romanType();
			roman->setRoman(str);

		} else {

			roman = new romanType(str);
		}

		cout << roman->getRoman() << " = " << roman->getNatural() << endl;
	}
}
