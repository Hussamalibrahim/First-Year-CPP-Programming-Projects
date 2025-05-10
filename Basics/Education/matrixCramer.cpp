#include<iostream>
using namespace std;
int main()
{
char virubels [3]{'a','b','c'};
double x,y;  
double ph1[3],ph2[3];  
cout << "The first equation a1x + b1y = c1" << endl;
for (int i = 0; i < 3; i++) 
{
cout<<"Enter "<<virubels[i]<<"1 :";    
cin>>ph1[i];
}
cout << "The secound equation a2x + b2y = c2" << endl;
for (int j = 0; j < 3; j++)
{
cout<<"Enter "<<virubels[j]<<"2 :"; 
cin>>ph2[j];
}
x=((ph1[2]*ph2[1])-(ph1[1]*ph2[2]))/((ph1[0]*ph2[1])-(ph1[1]*ph2[0]));
y=((ph1[0]*ph2[2])-(ph1[2]*ph2[0]))/((ph1[0]*ph2[1])-(ph1[1]*ph2[0]));   
cout<<"x = "<<x<<endl;
cout<<"y = "<<y<<endl;
return 0;
}