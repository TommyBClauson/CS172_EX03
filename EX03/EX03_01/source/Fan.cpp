#include "Fan.h"

using namespace std;

// no - arg constructor
Fan::Fan()
{
    speed = 1; // setting speed to be that of 1
    on = false; // setting the on to false
    radius = 10; // setting radius to def 5
}
// Func for getting speed
int Fan::getSpeed()
{
    return speed;
}
// Func for setting the speed between 1 and 3
void Fan::setSpeed(int fanSpeed)
{
    if (fanSpeed >= 1 && fanSpeed <= 3)
    {
        speed = fanSpeed;
    }

}
// Func for on or off "bool"
bool Fan::getOn()
{
    return on;
}
// Func for setting the power to on or off
void Fan::setOn(bool power)
{
    on = power;
}
// Func for getting radius
double Fan::getRadius()
{
    return radius;
}
// func for setting radius 
void Fan::setRadius (double fanRadius)
{
    if (fanRadius > 0)
    {
        radius = fanRadius;
    }
}