#include <iostream>
#include "EvenNumber.h"

using namespace std;

int main()
{
    EvenNumber x(16);

    cout << "The value of the even number is: " << x.getValue() << endl;

    cout << "The next value is going to be: " << x.getNext() << endl;

    cout << "The previous even number was: " << x.getPrevious() << endl;

    return 0;
}