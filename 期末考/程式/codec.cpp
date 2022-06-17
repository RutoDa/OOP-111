#include <iostream>
#include <map>

using namespace std;

class CoDec {

	map<char, char> enc, dec;
	map<char, char>::iterator it;

	public:
        CoDec(string text, string cipher) {
            for(int i=0;i<text.length();i++){
                enc[text[i]] = cipher[i];
                dec[cipher[i]] = text[i];
            }
        }
        string encode(string text) {//+-
            string ans="";
            for(int i=0; i<text.length() ; i++){
                if(enc.count(text[i])){
                    ans.push_back(enc[text[i]]);
                }
                else{
                    ans.push_back(text[i]);
                }
            }
            return ans;

        }
        string decode(string cipher) {//-+
            string ans="";
            for(int i=0; i<cipher.length() ; i++){
                if(dec.count(cipher[i])){
                    ans.push_back(dec[cipher[i]]);
                }
                else{
                    ans.push_back(cipher[i]);
                }
            }
            return ans;
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
