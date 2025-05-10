#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c,D,x,X ;
    cout << "ax^2 + by + c = 0" << "\nenter a b c values" << endl;
    cin >> a >> b >> c ;
    cout << a <<"x^2" << " + " << b << " y +" << c << endl;
    D = pow(b,2) - (4*b*c);
    cout << "sqrt(D) = " << sqrt(D) << endl;
    if (D > 0) {
        x = ( -b - sqrt(D) ) / 2 * a ;
        X = ( -b + sqrt(D) ) / 2 * a ;
        cout << "x1 = " << x << "\nx2 = " << X << endl;
    }

return 0;
}