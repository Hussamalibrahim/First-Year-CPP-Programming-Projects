#include<iostream>
using namespace std;
int xy (int, int);

int fx (int, int );

int fx (int x, int y){
    return x + y;
}

int main ()
{
    cout << xy (5, 4) << endl;
    cout << fx (4, 4) << endl;
    cout << y (5, 4) << endl;
    return 0;
}

intxy (int x, int y){
    return x * y;
}
