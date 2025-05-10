#include<iostream>
using namespace std;
void fun(int&x, int&y) {
    x+=1;
    y+=2;
}
int main()
{
    int x=5,y=6;
    fun(x, y);
    cout <<  x << y<<endl;
    return 0;
}