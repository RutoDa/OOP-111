#include <iostream>
#include <map>

using namespace std;

class CoDec {

	map<char, char> enc, dec;
	map<char, char>::iterator it;

	public:
	CoDec(string text, string cipher) {	
	}
	string encode(string text) {		
	}
	string decode(string cipher) {
	}
};

int main() {

	string s0, s1;

	cin >> s0 >> s1;

	CoDec codec = CoDec(s0, s1);

	while(cin >> s0) {

		switch(s0[0]) {

			case '+':
				cout << codec.encode(s0) << endl;
				break;
			case '-':
				cout << codec.decode(s0) << endl;
				break;
		}
	}

}
