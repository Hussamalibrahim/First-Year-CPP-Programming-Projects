#include<iostream>
using namespace std;

int main()
{
int A,B ,SWIP =0;
cout << "this proggram for swipping the numbers" << endl;
cout << "Enter A value :";
cin >> A;
cout << "Enter B value :";
cin >> B;
SWIP=A+B;
B=SWIP-B;
A=SWIP-A;
cout << "after swipping the numbers \nA=" << A<< "\nB=" <<B<<endl;
    return 0;
}