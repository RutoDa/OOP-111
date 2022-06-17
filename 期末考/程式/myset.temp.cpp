#include <iostream>
#include <set>

using namespace std;

class MySet {
    friend ostream& operator<<(ostream& oo, MySet& ss)
    {
        auto it = ss.nums.rbegin();
        while (it != ss.nums.rend())
            oo << *it++ << " ";
        oo << "\b";
        return oo;
    }
    friend istream& operator>>(istream& oo, MySet& ss)
    {
        int x;
        cin >> x;
        ss.nums.insert(x);
        return oo;
    }
	set<int> nums;

};

int main() {

	int len;

	while(cin >> len) {

		MySet mset;

		for(;len; --len)
			cin >> mset;

		cout << mset << endl;
	}

}
