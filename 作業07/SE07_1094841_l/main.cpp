#include <iostream>
#include <stack>
using namespace std;

void decToBin(int num, int base);

int main()
{
    int decimalNum;
    int base;

    base = 2;

    cout << "Enter number in decimal: ";
    cin >> decimalNum;
    cout << endl;

    cout << "Decimal " << decimalNum << " = ";
    decToBin(decimalNum, base);
    cout << " binary" << endl;

    return 0;
}

void decToBin(int num, int base)
{
    stack<int> s;
    while (num > 0) {
        s.push(num % base);
        num /= base;
    }
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
}
