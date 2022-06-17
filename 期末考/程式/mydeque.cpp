#include <iostream>
#include <deque>

using namespace std;

class MyDeque {

	deque<int> deq;
    friend ostream& operator<<(ostream& oo, MyDeque& dd)
    {
        auto it = dd.deq.begin();
        while (it != dd.deq.end()-1)
            oo << *it++ << " ";
        oo << *it;
        return oo;
    }

	public:
		void shift() {
		    deq.pop_front();
		}
		void pop() {
            deq.pop_back();
		}

		void unshift(int n) {
            deq.push_front(n);
		}
		void push(int n) {
		    deq.push_back(n);
		}
};

int main() {

	char cmd[9];
	int num;

	MyDeque deq;

	while(cin >> cmd) {

		switch(cmd[1]) {
			case 'H':	// SHIFT
				deq.shift();
				break;
			case 'O':	// POP
				deq.pop();
				break;
			case 'N':	// UNSHIFT
				cin >> num;
				deq.unshift(num);
				break;
			case 'U':	// PUSH
				cin >> num;
				deq.push(num);
				break;
		}
		cout << deq << endl;
	}
}
