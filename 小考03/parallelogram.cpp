#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

class Parallelogram {
public:
    void setData(double, double);
    double getArea();
    Parallelogram();
    Parallelogram(double, double);
protected:
    double bottomSide;
    double height;
    double area;
    void calArea();
};

class Trapezoid : public Parallelogram {
public:
     void setData(double, double, double);
     Trapezoid();
     Trapezoid(double, double, double);
protected:
    void calArea();
private:
    double topSide;
};

void setFormat(ostream &os) {
    cout << fixed << setprecision(2);
}

int main() {

	setFormat(cout);

	string type;

	double ts, bs, h;

	Parallelogram *p;
	Trapezoid *t;

	while(cin >> type) {

		switch(type[0]) {

			case 'P':
				cin >> bs >> h;
				p = new Parallelogram(bs, h);
				cout << "P " << p->getArea() << endl;
				break;
			case 'T':
				cin >> ts >> bs >> h;
				t = new Trapezoid(ts, bs, h);
				cout << "T " << t->getArea() << endl;
				break;
		}
	}

}

void Parallelogram::setData(double b, double h){
    if (b >= 0) bottomSide = b;
    else bottomSide = 0;
    if (h >= 0) height = h;
    else height=0;
    calArea();
}

double Parallelogram::getArea(){
    return area;
}

Parallelogram::Parallelogram(){
    height = 0;
    bottomSide = 0;
    calArea();
}

Parallelogram::Parallelogram(double b , double h){
    setData(b, h);
}

void Parallelogram::calArea() {
    area = height * bottomSide;
}

void Trapezoid::setData(double t, double b, double h){
    if (b >= 0) bottomSide = b;
    else bottomSide = 0;
    if (h>=0) height = h;
    else height = 0;
    if (t>=0) topSide = t;
    else topSide = 0;
    calArea();
}

Trapezoid::Trapezoid(){
    topSide = 0;
    height = 0;
    bottomSide = 0;
    calArea();
}

Trapezoid::Trapezoid(double t, double b, double h){
    setData(t, b, h);
}

void Trapezoid::calArea() {
    area = (topSide + bottomSide) * height / 2;
}
