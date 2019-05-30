#include <iostream>
#include "Fan.h"

using namespace std;

int main()
{
    // setting the values of Fan 1
    Fan f1;
    f1.setSpeed(3);
    f1.setRadius(10);
    f1.setOn(true);
    // setting the values of Fan 2
    Fan f2;
    f2.setSpeed(2);
    f2.setRadius(5);
    f2.setOn(false);

    // Outputting to the screen by using the get funcs
    cout << "Fan 1 speed = " << f1.getSpeed() <<
        "  radius = " << f1.getRadius() <<
        "  on = " << f1.getOn() << endl;

    cout << "Fan 2 speed = " << f2.getSpeed() <<
        "  radius = " << f2.getRadius() <<
        "  on = " << f2.getOn() << endl;
}