#include <iostream>

using namespace std;

class Complex {
    friend ostream& operator<<(ostream& oo, const Complex& cc){
        if (cc.image>=0)
            oo << cc.real << "+" << cc.image << "i";
        else oo << cc.real <<  cc.image << "i";
        return oo;
    }
    friend istream& operator>>(istream& oo, Complex& cc){
        oo >> cc.real >> cc.image;
        return oo;
    }
	int real, image;
	public:
	Complex() {}
	Complex(int r, int i) : real(r), image(i) {}
	Complex operator+(const Complex& otherObject) const
    {
        Complex value;
        value.real = real+otherObject.real;
        value.image = image + otherObject.image;
        return value;
    }
    Complex operator-(const Complex& otherObject) const
    {
        Complex value;
        value.real = real - otherObject.real;
        value.image = image - otherObject.image;
        return value;
    }
    Complex operator*(const Complex& other) const
    {
        Complex value;
        value.real = (real*other.real)-(image*other.image);
        value.image = (real*other.image)+(image*other.real);
        return value;
    }
    Complex operator/(const Complex& other) const
    {
        Complex value;
        value.real = (real*other.real+image*other.image)/(other.real*other.real+other.image*other.image);
        value.image = (image*other.real-real*other.image)/(other.real*other.real+other.image*other.image);
        return value;
    }

};

int main() {

	Complex c1, c2;
	char op;
	while(cin >> c1 >> op >> c2) {
		switch(op) {
			case '+':
				cout << c1 + c2 << endl;
				break;
			case '-':
				cout << c1 - c2 << endl;
				break;
			case '*':
				cout << c1 * c2 << endl;
				break;
			case '/':
				cout << c1 / c2 << endl;
				break;
		}
	}
}
