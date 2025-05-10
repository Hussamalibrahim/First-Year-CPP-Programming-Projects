#include <iostream>
using namespace std;

class car {
public :
string N ;
string C ;
int MS ;
int M ;
    car (string n , string c ,int ms , int m){
    N=n ;
    C=c ;
    MS=ms ;
    M=m ;
    }
       void getinfo() {
       cout << "name :" << N<< endl;
       cout << "color :" << C<< endl;
       cout << "maxspeed :" << MS<< endl;
       cout << "model :" << M<< endl;
       }
};
class cars : public car{
public : 
cars (string n , string c ,int ms , int m) : car (n , c ,ms  , m){
}
};
int main()
{
    car car1 ={ "BMW" , "BLUE" , 390 , 2023};
    car1.getinfo() ;
    car car2 {"volvo" , "black" , 380 , 2024};
    car2.getinfo();
    cars cars1 ={"LEGSES", "RED",350,2023};
    cars1.getinfo();
    
    return 0;
}