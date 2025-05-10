#include<iostream>
using namespace std;

int main()
{

int x, y ;
char code;
float res;
cout << "Enter the calculation " << endl;
r :cin >> x;
cin >> code;
cin >> y;
switch(code)
{
case '+': res=x+y;
break;
case '-': res=x-y ;
break;
case '*': res=x*y ;
break;
case '/': res=x/y ;
break;
default:
{
cout << "unkown operation \nplz return the calculation" << endl;
goto r ;
}
break;
}
cout << x <<code<<y<<"="<<res<< endl;
    return 0;
}