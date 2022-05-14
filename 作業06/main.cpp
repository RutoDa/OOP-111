#include <bits/stdc++.h>
#include "ptrMemberVarType.h"
using namespace std;

void testCopyConst(ptrMemberVarType temp);

int main()
{
    ptrMemberVarType listOne;

    int num;

    cout << "Line 9: Enter 5 integers." << endl;

    for (int index = 0; index < 5; index++)
    {
        cin >> num;
        listOne.insertAt(index, num);
    }

    cout << "Line 15: listOne: ";
    listOne.print();
    cout << endl;

      //Declare listTwo and initialize it using listOne
    ptrMemberVarType listTwo(listOne);

    cout << "Line 19: listTwo: ";
    listTwo.print();
    cout << endl;

    listTwo.insertAt(5, 34);
    listTwo.insertAt(2, -76);

    cout << "Line 24: After modifying listTwo: ";
    listTwo.print();
    cout << endl;


    cout << "Line 27: After modifying listTwo, "
         << "listOne: ";
    listOne.print();
    cout << endl;

    cout <<  "Line 30: Calling the function testCopyConst"
         << endl;

         //Call function testCopyConst
    testCopyConst(listOne);

    cout << "Line 32: After a call to the function "
         << "testCopyConst, " << endl
         << "         listOne is: ";

    listOne.print();
    cout << endl;

    return 0;
}

void testCopyConst(ptrMemberVarType temp)
{
    cout << "Line 39: *** Inside the function "
         << "testCopyConst ***" << endl;

    cout << "Line 40: Object temp data: ";
    temp.print();
    cout << endl;

    temp.insertAt(3, -100);
    cout << "Line 44: After changing temp: ";
    temp.print();
    cout << endl;

    cout << "Line 47: *** Exiting the function "
         << "testCopyConst ***" << endl;
}
