#include <iostream>
using namespace std;

class car {
public :
string N ;
string C ;
int MS ;
int M ;
    
       void getinfo() {
       cout << "name :" << N<< endl;
       cout << "color :" << C<< endl;
       cout << "maxspeed :" << MS<< endl;
       cout << "model :" << M<< endl;
       }
};
int main()
{
    car car1 ={ "BMW" , "BLUE" , 390 , 2023};
    car1.getinfo() ;
    car car2 {"volvo" , "black" , 380 , 2024};
    car2.getinfo();
    
    return 0;
}