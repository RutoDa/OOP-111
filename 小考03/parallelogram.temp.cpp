#include <iostream>
#include <iomanip>

using namespace std;

class Parallelogram {


};

class Trapezoid : public Parallelogram {

};

void setFormat(ostream &os) {

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
