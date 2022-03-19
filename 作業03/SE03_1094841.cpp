#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#define STUDENT_TOTAL 20

using namespace std;

class studentType
{
    public:
    	//對四個 member  設計 set_xxx() 與 get_xxx() ;
        void set_score(int);
        int get_score() const;
        void set_FName(string);
        string get_FName() const;
        void set_LName(string);
        string get_LName() const;
		void set_grade(char);
		char get_grade() const;
		
		//constructors
        studentType();  
        //First name, Last name, Score, Grade
        studentType(string, string, int, char);
        //First name, Last name, Score
        studentType(string, string, int);
        //First name, Last name
        studentType(string, string);
        //First name
        studentType(string);
        
        //destructor
        ~studentType();
    private:
        string studentFName;
        string studentLName;
        int testScore;
        char grade;
};

void getData(fstream& inFile, studentType sList[], int listSize);
void printResult(fstream& outFile, const studentType* sList, int listSize);
void calculateGrade(studentType* sList, int listSize);
int highestScore(const studentType* sList, int listSize);

int main(void)
{
    fstream input_file, output_file;
    input_file.open("./ch09_ex02.txt", ios::in);
    studentType students[STUDENT_TOTAL];
    getData(input_file, students, STUDENT_TOTAL);
    input_file.close();
    calculateGrade(students, STUDENT_TOTAL);
    output_file.open("./ch09_ex02_out.txt", ios::out);
    printResult(output_file, students, STUDENT_TOTAL);
    output_file.close();
    return 0;
}

void getData(fstream& inFile, studentType* sList, int listSize) {
    string FName;
    string LName;
    int score;
    for (int i = 0; i < listSize; i++) {
        inFile >> FName >> LName >> score;
        sList[i].set_FName(FName);
        sList[i].set_LName(LName);
        sList[i].set_score(score);
    }
}

void calculateGrade(studentType* sList, int listSize) {
	for (int i = 0; i < listSize; i++) {
		if (sList[i].get_score() <= 100 && sList[i].get_score() >= 90) sList[i].set_grade('A');
		else if (sList[i].get_score() <= 89 && sList[i].get_score() >= 80) sList[i].set_grade('B');
		else if (sList[i].get_score() <= 79 && sList[i].get_score() >= 70) sList[i].set_grade('C');
	}
}

int highestScore(const studentType* sList, int listSize) {
	int maxScore = -1;
	for (int i=0; i<listSize; i++) {
		if (sList[i].get_score() > maxScore) maxScore = sList[i].get_score();
	}
	return maxScore;
}

void printResult(fstream& outFile, const studentType* sList, int listSize) {
	outFile << left << setw(20) << "Student Name"  << setw(20) << "Test Score" << setw(20) <<"Grade" << endl;
    for (int i = 0; i < listSize; i++) {
        outFile << left << setw(20) << sList[i].get_LName() + ", " + sList[i].get_FName() << setw(20) << sList[i].get_score() << setw(20) << sList[i].get_grade() << endl;
    }
    outFile << "\nHighest Test Score: " << highestScore(sList, STUDENT_TOTAL) << endl;
    outFile << "Students having the highest test score: " << endl;
    for (int i = 0; i < listSize; i++) {
    	if (sList[i].get_score() == highestScore(sList, STUDENT_TOTAL)) outFile << left << setw(20) << sList[i].get_LName()  + ", " + sList[i].get_FName() << endl;
    }
}

studentType::studentType(string FName, string LName, int score, char testGrade) {
	studentFName = FName;
    studentLName = LName;
    testScore = score;
    grade = testGrade;
}

studentType::studentType(string FName, string LName, int score){
    studentFName = FName;
    studentLName = LName;
    testScore = score;
    grade = 'X';
}

studentType::studentType(string FName, string LName){
    studentFName = FName;
    studentLName = LName;
    testScore = -1;
    grade = 'X';
}

studentType::studentType(string FName){
    studentFName = FName;
    studentLName = "";
    testScore = -1;
    grade = 'X';
}

studentType::studentType(){
    studentFName = "";
    studentLName = "";
    testScore = -1;
    grade = 'X';
}

studentType::~studentType(){
}

void studentType::set_FName(string FName){
    studentFName = FName;
}

void studentType::set_LName(string LName){
    studentLName = LName;
}

void studentType::set_score(int score){
    testScore = score;
}

int studentType::get_score() const{
    return testScore;
}

string studentType::get_FName() const{
    return studentFName;
}

string studentType::get_LName() const{
    return studentLName;
}

void studentType::set_grade(char testGrade) {
	grade = testGrade;
}

char studentType::get_grade() const {
	return grade;
}

