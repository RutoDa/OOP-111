#include <iostream>
#include <iomanip>
#include "circleType.h"
#include "negativeNumber.h"
using namespace std;
int main()
{
    circleType circle;
    double radius;
    cout << fixed << showpoint << setprecision(2);
    try
    {
        cout << "Line 13: Enter the radius "<< "of a circle: ";
        cin >> radius;
        cout << endl;
        circle.setRadius(radius);
        cout << "Line 17: circle - "<< "radius: " << circle.getRadius()<< ", area: " << circle.area()<< ", circumference: " << circle.circumference() << endl;
    }
    catch (negativeNumber obj)
    {
        cout << "Line 21: " << obj.what() << endl;
    }
    return 0;
}
