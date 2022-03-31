#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Shape {

};

class RightTriangle : public Shape {

};

class Rectangle : public Shape {

};

class Circle : public Shape {

};

void setOutputFormat(ostream &os) {

}


int main() {

	setOutputFormat(cout);

	string type;

	int count = 0;

	double input1, input2;

	RightTriangle *t0;
	Rectangle *r0;
	Circle *c0;

	for(int count = 0; cin >> type >> input1; ++count) {

		switch(type[0]) {
			case 'T':
				cin >> input2;
				if(count % 2) {
					t0 = new RightTriangle(input1, input2);
				} else {
					t0 = new RightTriangle();
					t0->setData(input1, input2);
				}
				t0->calPerimeter();
				t0->calArea();
				cout << t0->getPerimeter() << " " << t0->getArea() << endl;
				break;
			case 'R':
				cin >> input2;
				if(count % 2) {
					r0 = new Rectangle(input1, input2);
				} else {
					r0 = new Rectangle();
					r0->setData(input1, input2);
				}
				r0->calPerimeter();
				r0->calArea();
				cout << r0->getPerimeter() << " " << r0->getArea() << endl;
				break;
			case 'C':
				if(count % 2) {
					c0 = new Circle(input1);
				} else {
					c0 = new Circle();
					c0->setData(input1);
				}
				c0->calPerimeter();
				c0->calArea();
				cout << c0->getPerimeter() << " " << c0->getArea() << endl;
				break;
		}
	}

	return 0;
}

