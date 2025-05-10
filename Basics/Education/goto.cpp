#include<iostream>
using namespace std;

int main()
{
int number ;
cout << "5+7=";
r :cin >> number;
    if (number==12)
    cout << "right answer" << endl;
    else {
    cout << "wrong answer try again" << endl;
    goto r ;
    
    }
    
    return 0;
}