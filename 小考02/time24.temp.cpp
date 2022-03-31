#include <iostream>
#include <string>

using namespace std;

class Time24 {

};

int main() {

	Time24 time24;
	int h, m, s;

	while(cin >> h >> m >> s) {

		time24.setTime(h, m, s);
		time24.displayTimeIn24Hour();
		time24.displayTimeIn12Hour();
		time24.displayGreeting();
	}
}
