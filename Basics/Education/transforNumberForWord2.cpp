#include<iostream>
using namespace std;

int main()
{
string T[]{"zero","one","two","three","four","five","six","seven","eight","nine"};
int number;
int j=1000;
cin >> number;
for (int i =4;i>0;i--){
cout << T[number/j]<<" ";
number=number%j;
j=j/10;
}


    return 0;
}