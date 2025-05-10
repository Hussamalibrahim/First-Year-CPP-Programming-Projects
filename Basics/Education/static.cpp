#include<iostream>
using namespace std;
void fun(){
static int x=0;
x++;
cout <<  x << endl;
}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}