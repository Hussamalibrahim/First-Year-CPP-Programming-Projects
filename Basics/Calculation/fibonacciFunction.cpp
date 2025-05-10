#include<iostream>
using namespace std;
int Fibonacci (int a)
{
if (a<2)
return a ;
return Fibonacci(a-1) + Fibonacci(a-2);

}

int main()
{
    cout << Fibonacci(11);
    return 0;
}