#include<iostream>
using namespace std;

int main()
{
int x=5; //int & int 
int *ptr;
ptr =&x;
    cout << x << endl;
    cout << *ptr << endl;
    cout << &x << endl;
    cout << ptr << endl;
x=0;
    cout << x << endl;
    cout << *ptr << endl;
    cout << &x << endl;
    cout << &*ptr << endl;
*ptr=50;    
    cout << x << endl;
    cout << *&*ptr << endl;
    cout << &x << endl;
    cout << ptr << endl;
void *std ;    //float and void
float y=9;
std=&y;
float *i = static_cast <float*>(std);
    cout << y << endl;
    cout << *i << endl;
    cout << &y << endl;
    cout << std << endl;    
    
    

    return 0;
}