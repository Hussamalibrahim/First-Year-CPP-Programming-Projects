#include<iostream>
#include<string>
using namespace std;
string delete_operator(string str)
{
    for (int i = 0 ; i < str.length() ; i++)
        if (isalpha(str[i]) || isspace(str[i]))
            cout << str[i];
    return str ;
}
int main()
{
    cout << delete_operator("\nwe here to learn c++");

    return 0;
}