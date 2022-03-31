#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>

using namespace std;

class Shape {
public:
    double getPerimeter() const;
    void setPerimeter(double);
    double getArea() const;
    void setArea(double);
    double perimeter;
    double area;
};

class RightTriangle : public Shape {
public:
    double calPerimeter();
    double calArea();
    void setData(double, double);
    void setWidth(double);
    void setHeight(double);
    RightTriangle();
    RightTriangle(double, double);
private:
    double width;
    double height;
};

class Rectangle : public Shape {
public:
    double calPerimeter();
    double calArea();
    void setData(double, double);
    void setWidth(double);
    void setHeight(double);
    Rectangle();
    Rectangle(double, double);
private:
    double width;
    double height;
};

class Circle : public Shape {
public:
    double calPerimeter();
    double calArea();
    void setData(double);
    Circle();
    Circle(double);
    double Pi = 3.14159265;
private:
    double radius;
};

void setOutputFormat(ostream &os) {
    cout << fixed << setprecision(4);
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

double Shape::getPerimeter() const{
    return perimeter;
}

void Shape::setPerimeter(double p){
    if (p >= 0) perimeter = p;
    else perimeter = 0;
}

double Shape::getArea() const{
    return area;
}

void Shape::setArea(double a) {
    if (a >= 0) area = a;
    else area = 0;
}

double RightTriangle::calPerimeter(){
    double thrid = sqrt(width * width + height * height);
    perimeter = width + height + thrid;
    return width + height + thrid;
}

double RightTriangle::calArea(){
    area = width * height / 2;
    return width * height / 2;
}

void RightTriangle::setData(double w, double h){
    setWidth(w);
    setHeight(h);
}

void RightTriangle::setWidth(double w) {
    if (w >= 0) width = w;
    else width = 0;
}

void RightTriangle::setHeight(double h) {
    if (h >= 0) height = h;
    else height = 0;
}

RightTriangle::RightTriangle() {
    width = 0;
    height = 0;
}

RightTriangle::RightTriangle(double w, double h) {
    if (w >= 0) width = w;
    else width = 0;
    if (h >= 0) height = h;
    else height = 0;
}

double  Rectangle::calPerimeter(){
    perimeter = 2 * (width + height);
    return 2 * (width + height);
}

double Rectangle::calArea(){
    area = width * height;
    return width * height;
}

void Rectangle::setData(double w, double h){
    setWidth(w);
    setHeight(h);
}

void Rectangle::setWidth(double w){
    if (w >= 0) width = w;
    else width = 0;
}

void Rectangle::setHeight(double h){
    if (h >= 0) height = h;
    else height = 0;
}

Rectangle::Rectangle(){
    width = 0;
    height = 0;
}

Rectangle::Rectangle(double w, double h) {
    if (w >= 0) width = w;
    else width = 0;
    if (h >= 0) height = h;
    else height = 0;
}

double Circle::calPerimeter() {
    perimeter = 2 * Pi * radius;
    return 2 * Pi * radius;
}

double Circle::calArea() {
    area = radius * radius * Pi;
    return radius * radius * Pi;
}

void Circle::setData(double r) {
    if (r >= 0) radius = r;
    else radius = 0;
}

Circle::Circle(){
    radius = 0;
}

Circle::Circle(double r){
    if (r >= 0) radius = r;
    else radius = 0;
}
