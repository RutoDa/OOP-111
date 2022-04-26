#include <iostream>
#include <iomanip>
using namespace std;

class Shape {
public:
    virtual void calArea()=0;
    void printArea();
    double bottom;
    double height;
    double area;
};

class Parallelogram : public Shape {
public:
    void calArea();
    double getArea();
    Parallelogram(double, double);
};

class Trapezoid : public Shape {
public:
    void calArea();
    double getArea();
    double up;
    Trapezoid(double, double, double);
};

class Triangle : public Trapezoid {
public:
    double getArea();
    Triangle(double, double);
};

void setOutputFormat(ostream &os) {
    cout << fixed << setprecision(4);
}

int main() {

	setOutputFormat(cout);

	Parallelogram *para;
	Trapezoid *trap;
	Triangle *tria;

	string s;

	double n[3];

	while(cin >> s) {

		switch(s[0]) {
			case 'P':
				cin >> n[0] >> n[1];
				para = new Parallelogram(n[0], n[1]);
				para->calArea();
				cout << para->getArea() << endl;
				delete para;
				break;
			case 'T':
				cin >> n[0] >> n[1] >> n[2];
				trap = new Trapezoid(n[0], n[1], n[2]);
				trap->calArea();
				cout << trap->getArea() << endl;
				delete trap;
				break;
			case '3':
				cin >> n[0] >> n[1];
				tria = new Triangle(n[0], n[1]);
				tria->calArea();
				cout << tria->getArea() << endl;
				delete tria;
				break;
		}
	}
}

void Shape::printArea(){};

void Parallelogram::calArea() {
    area = (bottom*height);
};

Parallelogram::Parallelogram(double h, double b)
{
    bottom = b;
    height = h;
}

double Parallelogram::getArea()
{
    return area;
}

void Trapezoid::calArea() {
    area = (up+bottom)*height/2;
}

Trapezoid::Trapezoid(double u, double b, double h)
{
    bottom = b;
    height = h;
    up = u;
}

double Trapezoid::getArea()
{
    return area;
}

void Triangle::calArea() {
    area = (height*bottom)/2;
}

Triangle::Triangle(double h, double b) {
    bottom = b;
    height = h;
}

double Triangle::getArea()
{
    return area;
}
