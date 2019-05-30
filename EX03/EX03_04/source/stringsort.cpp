#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

/* this is the site i looked at on how to sort calling the constuctors in the STL Library
begin() and end(). This is in the algorithm library.

    https://en.cppreference.com/w/cpp/algorithm/sort

/*/

string sort(string& s)
{
    // begin() points to the first element of the string and end() points to the last element.
    // begin() and end() are iterator functions
    sort(s.begin(), s.end());
}

int main()
{
    string s;
    // asking user for string
    cout << "Please enter a string: ";
    getline(cin, s);

    // calling back to func
    sort(s);

    // displaying sorted string
    cout << "The sorted string is: " << s << endl;;
}