#include <iostream>
#include <string>
using namespace std;
int main() {
    int a, b, sum = 0 ,count=0;
    while (cin >> a >> b){
        sum = 0;
        count ++;
    if (a < b) {
        for (int i = a; i < b+1; i++)
        {
            if (i%2!=0) sum += i;
        }
        cout << "Case "<<count<<": " <<sum << endl;
    }
    else if (a > b) {
        for (int i = b; i < a+1; i++)
        {
            if (i%2!=0) sum += i;
        }
        cout << "Case "<<count<<": "<<sum << endl;
    }
    else cout <<"Case "<<count<<": "<< 0 << endl;
    }
}
