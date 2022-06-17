#include <iostream>
#include <vector>

using namespace std;

class Matrix {

	int r, c;

	friend istream &operator>>(istream &is, Matrix &m) {
        is >> r >> c;
        aa = new int[r*c];
        for (int i )
		return is;
	}

	friend ostream &operator<<(ostream &os, const Matrix m) {

		return os;
	}

	public:

	Matrix() : r(0), c(0) {}

    int* aa;
	Matrix operator+(const Matrix m) {

		Matrix m0;

		return m0;
	}
	Matrix operator-(const Matrix m) {
		Matrix m0;

		return m0;
	}
	Matrix operator*(const Matrix m) {
		Matrix m0;

		return m0;
	}
};

int main() {

	Matrix m1, m2;
	char op;
	while(cin >> m1 >> op >> m2) {
		switch(op) {
			case '+':
				cout << m1 + m2 << endl;
				break;
			case '-':
				cout << m1 - m2 << endl;
				break;
			case '*':
				cout << m1 * m2 << endl;
				break;
		}
	}
}
