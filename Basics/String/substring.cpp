// C++ program to demonstrate functioning of substr()
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    // Take any string
    string s1 = "hello world";
 
    // Copy two characters of s1 (starting
    // from position 3)
    string r = s1.substr(9, 3);
 
    // prints the result
    cout << "String is: " << r;
 
    return 0;
}