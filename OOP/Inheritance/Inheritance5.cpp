#include <iostream>
#include<string>
using namespace std;

class car {
private :
    string C ;
    int MS ;
    int M ;
    protected :
    string N ;
public :
    car (string n, string c,int ms, int m) {
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
class cars : public car
{
public:
    cars (string n, string c,int ms, int m) : car (n, c, ms,m) {
    }
    void like() {
        cout << N << " like range rover" << endl;
    }

};
int main()
{
    car car1 = { "BMW", "BLUE", 390, 2023};
    car1.getinfo() ;
    car car2 {"volvo", "black", 380, 2024};
    car2.getinfo();
    cars cars1 = { "ligsese", "BLUE", 390, 2023};
    cars1.getinfo();
    cars1.like();

    return 0;
}