#include<iostream>
#include<string>
using namespace std;
string delete_F(string str)
{
    str [0] = NULL ;
    str[str.length()-1] = NULL ;
    return str ;
}

int main()
{

    cout <<  delete_F("Hi world") << endl;
    return 0;
}