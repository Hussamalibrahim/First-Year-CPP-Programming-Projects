// C++ program to demonstrate functioning of substr()
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    // Take any string
    string s = "dog:cat";
 
    // Find position of ':' using find()
    int pos = s.find(":");
    cout << pos << endl;
 
    // Copy substring after pos
    string sub = s.substr(pos + 1);
 
    // prints the result
    cout << "String is: " << sub;
 
    return 0;
}