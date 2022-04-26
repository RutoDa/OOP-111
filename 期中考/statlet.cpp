#include <iostream>
#include <iomanip>
using namespace std;

class Scores {
public:
    double *A;
    double *B;
    int N;
    void getScore(istream &os);
    void printAverage(ostream &os);
    void printVariance(ostream &os);
    Scores(int n);
};

void setOutputFormat(ostream &os) {
    cout << fixed << setprecision(4);
}

int main() {

	setOutputFormat(cout);

	int n;
	Scores *s;
	while(cin >> n) {

		s = new Scores(n);

		s->getScore(cin);
		s->printAverage(cout);
		s->printVariance(cout);

		delete s;
	}
}

Scores::Scores(int n) {
    N = n;
}
void Scores::getScore(istream &os) {
    A = new double[N];
    B = new double[N];
    for (int i =0; i<N; i++)
    {
        cin >> A[i] >> B[i];
    }
}
void Scores::printAverage(ostream &os){
    double sum = 0;
    for (int i =0; i<N; i++)
    {
        sum += A[i];
    }
    cout << sum/N << " ";

    sum = 0;
    for (int i =0; i<N; i++)
    {
        sum += B[i];
    }
    cout << sum/N << endl;
}
void Scores::printVariance(ostream &os){
    double sum = 0;
    for (int i =0; i<N; i++)
    {
        sum += A[i];
    }
    double avg = sum/N ;

    double temp = 0;
    for (int i =0; i<N;i++)
    {
        temp += (A[i]-avg)*(A[i]-avg);
    }
    cout << temp/N << " ";

    sum = 0;
    for (int i =0; i<N; i++)
    {
        sum += B[i];
    }
    avg = sum/N ;

    temp = 0;
    for (int i =0; i<N;i++)
    {
        temp += (B[i]-avg)*(B[i]-avg);
    }
    cout << temp/N << endl;
}
