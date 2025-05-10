#include<iostream>
using namespace std;

int main()
{
int number ;
cout << "13+7=" << endl;
try{
cin >> number;
if (number != 20)
throw 20 ;
cout << "right answer" << endl;
}
catch (int a)
{
cout << "wrong" <<a << " is the right answer" << endl;
}
    
    return 0;
}