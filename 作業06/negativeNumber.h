#ifndef NN
#define NN
#include<iostream>
using namespace std;
class negativeNumber
{
public:
    negativeNumber(string str = "Number"){
        message = str + " cannot be negative";
    }
    string what(){
        return message;
    }
private:
    string message;
};

#endif // NN
