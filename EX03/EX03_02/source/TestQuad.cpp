#include "QuadraticEquation.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, temp;

    cout << "Please enter a value for A, B and C." << endl;
    cout << "Entry for A: ";
    cin >> a;
    cout << "Entry for B: ";
    cin >> b;
    cout << "Entry for C: ";
    cin >> c;

    // creating an object
    QuadraticEquation quad(a, b, c);

    // calling back to func for discriminant
    temp = quad.getDiscriminant();
    cout << "the given values are:" << endl;

    // calling back to func for getting a b and c
    cout << "Value of A is: " << quad.getA() << endl;
    cout << "Value of B is: " << quad.getB() << endl;
    cout << "Value of C is: " << quad.getC() << endl;

    // if the value of "d" is negative
        if (temp < 0)
        {
            cout << "The equation has no real roots." << endl;
        }
        else if (temp == 0)
        {
            cout << "The root is: " << quad.getRoot1() << endl;
        }
        else
            cout << "The roots are: " << quad.getRoot1() " and " << quad.getRoot2() << endl;
}