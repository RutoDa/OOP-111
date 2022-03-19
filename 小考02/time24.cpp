#include <iostream>
#include <string>

using namespace std;

class Time24 {
public:
    void setTime(int ,int, int);
    void displayTimeIn24Hour();
    void displayTimeIn12Hour();
    void displayGreeting();
    Time24();
    Time24(int, int, int);
    ~Time24();
private:
    int hours;
    int minutes;
    int seconds;
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

Time24::Time24(){
    hours = 0;
    minutes = 0;
    seconds = 0;
}

Time24::Time24(int h, int m, int s){
    if (h>=0 && h<=23 && m>=0 && m<=59 && s>=0 && s<=59) {
            hours = h;
            minutes = m;
            seconds = s;
    }
    else {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
}

Time24::~Time24(){
}

void Time24::setTime(int h, int m, int s){
    if (h>=0 && h<=23 && m>=0 && m<=59 && s>=0 && s<=59) {
            hours = h;
            minutes = m;
            seconds = s;
    }
    else {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
}

void Time24::displayTimeIn24Hour() {
    if (hours>9) cout << hours << ':';
    else cout << 0 << hours << ':';
    if (minutes>9) cout << minutes << ':';
    else cout << 0 << minutes << ':';
    if (seconds>9) cout << seconds << endl;
    else cout << 0 << seconds << endl;
}

void Time24::displayTimeIn12Hour() {
    if (hours>12) {
        if ((hours-12)>9) cout << hours-12 << ':';
        else cout << 0 << hours-12 << ':';
    }
    else {
        if (hours==0) cout << 12 << ':';
        else if (hours>9) cout << hours << ':';
        else cout << 0 << hours << ':';
    }
    if (minutes>9) cout << minutes << ':';
    else cout << 0 << minutes << ':';
    if (seconds>9) cout << seconds;
    else cout << 0 << seconds;
    if (hours>=12) cout << " PM\n";
    else cout << " AM\n";
}

void Time24::displayGreeting() {
    if (hours >= 6 && hours <= 11) cout << "Good Morning\n";
    else if (hours >= 12 && hours <= 17) cout << "Good Afternoon\n";
    else if (hours >= 18 && hours <= 22) cout << "Good Evening\n";
    else cout << "Time to Sleep\n";
}
