#include <iostream>
#include <string>

using namespace std;

class romanType
{
public:
    string romanNum;
    int naturalNum;
    void setRoman(string);
    int roman2Natural();
    int getNatural();
    string getRoman();
    romanType();
    romanType(string);
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

romanType::romanType()
{
    romanNum = "";
    naturalNum = -1;
}

romanType::romanType(string str)
{
    romanNum = str;
    naturalNum = roman2Natural();
}

void romanType::setRoman(string str)
{
    romanNum = str;
    naturalNum = roman2Natural();
}

int romanType::roman2Natural()
{
    int sum=0;
    for (int i=0; i<romanNum.size(); i++)
    {
        switch(romanNum[i]){
            case 'M':
                sum += 1000;
                break;
            case 'D':
                sum += 500;
                break;
            case 'C':
                if (i!=romanNum.size()-1 && romanNum[i+1]=='M') {
                    sum += 900;
                    i++;
                }
                else if (i!=romanNum.size()-1 && romanNum[i+1]=='D') {
                    sum += 400;
                    i++;
                }
                else {
                    sum += 100;
                }
                break;
            case 'L':
                sum += 50;
                break;
            case 'X':
                if (i!=romanNum.size()-1 && romanNum[i+1]=='C') {
                    sum += 90;
                    i++;
                }
                else if (i!=romanNum.size()-1 && romanNum[i+1]=='L') {
                    sum += 40;
                    i++;
                }
                else {
                    sum += 10;
                }
                break;
            case 'V':
                sum += 5;
                break;
            case 'I':
                if (i!=romanNum.size()-1 && romanNum[i+1]=='X') {
                    sum += 9;
                    i++;
                }
                else if (i!=romanNum.size()-1 && romanNum[i+1]=='V') {
                    sum += 4;
                    i++;
                }
                else {
                    sum += 1;
                }
                break;
        }
    }
    return sum;
}

int romanType::getNatural() {
    return naturalNum;
}
string romanType::getRoman() {
    return romanNum;
}
