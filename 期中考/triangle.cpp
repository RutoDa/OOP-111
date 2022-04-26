#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Position {
    double X;
    double Y;
};

class Triangle {
    public:
        Position A;
        Position B;
        Position C;
        void printGravity(ostream &os);
        void printArea(ostream &os);
        Triangle(Position a, Position b, Position c);
};

void setOutputFormat(ostream &os) {
    cout << fixed << setprecision(4);
}

int main() {

	setOutputFormat(cout);

	Triangle *t;
	Position a, b, c;
	double x, y;

	while(cin >> x >> y) {

		a.X = x;
		a.Y = y;

		cin >> b.X >> b.Y;
		cin >> c.X >> c.Y;

		t = new Triangle(a, b, c);

		t->printGravity(cout);
		t->printArea(cout);

		delete t;
	}
}
Triangle::Triangle(Position a, Position b, Position c)
{
    A = a;
    B = b;
    C = c;
}
void Triangle::printGravity(ostream &os)
{
    //double x1 = 0.0, x2 = 3.0, x3 = 0.0;
    double x1 = A.X, x2 = B.X, x3 = C.X;
    //cout  << fixed << setprecision(4) << (A.X+B.X+C.X)/3 << " " << (A.Y+B.Y+C.Y)/3 << endl;
    cout << (double)((1.0/3.0)*(x3-(x1+x2)/2.00))+((x1+x2)/2.00) << " ";
    x1 = A.Y, x2 = B.Y, x3 = C.Y;
    cout << (double)((1.0/3.0)*(x3-(x1+x2)/2.00))+((x1+x2)/2.00) << endl;
}
void Triangle::printArea(ostream &os)
{
    //cout << A.X <<" " << B.X<< " " << C.X << endl;
    double e1, e2, e3;
    e1 = sqrt((A.X - B.X)*(A.X - B.X) + (A.Y - B.Y)*(A.Y - B.Y));

    e2 = sqrt((A.X - C.X)*(A.X - C.X) + (A.Y - C.Y)*(A.Y - C.Y));
    e3 = sqrt((B.X - C.X)*(B.X - C.X) + (B.Y - C.Y)*(B.Y - C.Y));

    //cout << e1 << " " << e2 << " " << e3 << endl;
    double s = (e1+e2+e3)/2.00;
    //cout << s << endl;
    cout<< fixed << setprecision(4)  << sqrt(s*(s-e1)*(s-e2)*(s-e3)) << endl;

}

