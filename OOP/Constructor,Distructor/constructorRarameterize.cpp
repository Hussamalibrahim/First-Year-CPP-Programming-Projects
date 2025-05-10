#include<iostream>
using namespace std;
class tringle {
private :
    float high ;
    float base ;
public :
    tringle() {
        cout << "first constructer" << endl;
        high = 0;
        base = 0;
    }
    tringle(float h, float b){
    cout << "constructor with vilue" << endl;
    high = h ;
    base = b ;
    }
    int getsize() {
        return base*high*0.5 ;
    }
    void print () {
        cout << "base is : " << base <<
             "\n high is : " << high <<
             "\nthe size of tringle is : " << getsize() << endl;
    }

};
int main()
{
    tringle t (10,10);
    t.print() ;
    return 0;
}