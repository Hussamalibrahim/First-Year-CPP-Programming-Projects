// C++ program to demonstrate all possible
// substrings of a given string
#include <bits/stdc++.h>
using namespace std;
 
// Function to print all sub strings
void subString(string s, int n)
{
    // Pick starting point in outer loop
    // and lengths of different strings for
    // a given starting point
        for (int len = 0; len <= n; len++)
            cout << s.substr(len) << endl;
}
 
// Driver program to test above function
int main()
{
    string s = "abcd";
    subString(s, s.length());
    return 0;
}