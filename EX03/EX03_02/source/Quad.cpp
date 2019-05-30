#include "QuadraticEquation.h"
#include <cmath>
using namespace std;

void QuadraticEquation::QuadraticEquation(double newA, double newB, double newC)
{
    a = newA;
    b = newB;
    c = newC;
}

double QuadraticEquation::getA(double a)
{
    return a;
}
double QuadraticEquation::getB(double b)
{
    return b;
}
double QuadraticEquation::getC(double c)
{
    return c;
}

double QuadraticEquation::getDiscriminant()
{
    return (pow(b , 2) - 4 * b * c);
}

double QuadraticEquation::getRoot1(double r1)
{
    if(getDiscriminant() < 0)
    {
        return 0;
    }
        else
        {
            (-b + (sprt(getDiscriminant())) / (2*a));
        }
}

double QuadraticEquation::getRoot2(double r2)
{
    if(getDiscriminant() < 0)
    {
        return 0;
    }
        else
        {
            (-b - (sprt(getDiscriminant())) / (2*a));
        }
}