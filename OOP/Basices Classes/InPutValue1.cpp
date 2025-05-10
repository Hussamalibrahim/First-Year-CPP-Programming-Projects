#include <iostream>
using namespace std;

class car {
public:
string N ;
string C ;
int MS ;
int M ;
} ;

int main()
{
    car car1 ;
    car1.N="BME";
    car1.C="blue";
    car1.MS=360;
    car1.M=2019;
    cout << "name :" << car1.N<< endl;
    cout << "color :" << car1.C<< endl;
    cout << "maxspeed :" << car1.MS<< endl;
    cout << "model :" << car1.M<< endl;
    
    
    return 0;
}