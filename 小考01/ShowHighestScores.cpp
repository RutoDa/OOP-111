#include <iostream>

using namespace std;

struct studentScore {
    string firstName;
    string lastName;
    int csScore;
    int dmScore;
    int pdScore;
    int totalScore;
};

int main() {
    studentScore students[20];
    int i = 0;
    while(cin>>students[i].firstName)
    {
        //cout << students[i].firstName;
        cin>>students[i].lastName;
        //cout << students[i].lastName;
        cin>>students[i].csScore;
        //cout << students[i].csScore;
        cin>>students[i].dmScore;
        //cout<<students[i].dmScore;
        cin>>students[i].pdScore;
        //cout<<students[i].pdScore;
        students[i].totalScore = students[i].csScore+students[i].dmScore+students[i].pdScore;
        i++;
    }
    int maxCs = students[0].csScore;
    int maxDm = students[0].dmScore;
    int maxPd = students[0].pdScore;
    int maxAll = students[0].totalScore;
    string cs= students[0].firstName + " " + students[0].lastName;
    string dm= students[0].firstName + " " + students[0].lastName;
    string pd= students[0].firstName + " " + students[0].lastName;
    string all = students[0].firstName + " " + students[0].lastName;
    int total = i;//比真正多一個
    for (i=0; i<total; i++)
    {
        if (maxCs < students[i].csScore) {
                maxCs = students[i].csScore;
                cs = students[i].firstName + " " + students[i].lastName;
        }
        if (maxDm < students[i].dmScore) {
                maxDm = students[i].dmScore;
                dm = students[i].firstName + " " + students[i].lastName;
        }
        if (maxPd < students[i].pdScore) {
                maxPd = students[i].pdScore;
                pd = students[i].firstName + " " + students[i].lastName;
        }
        if (maxAll < students[i].totalScore) {
                maxAll = students[i].totalScore;
                all = students[i].firstName + " " + students[i].lastName;
        }
    }
    cout << "Highest CS Score: " << maxCs << ", "+cs << endl;
    cout << "Highest DM Score: " << maxDm << ", "+dm << endl;
    cout << "Highest PD Score: " << maxPd << ", "+pd << endl;
    cout << "Highest Total Score: " << maxAll << ", "+all << endl;
}
