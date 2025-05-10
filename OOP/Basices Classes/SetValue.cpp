#include<iostream>
using namespace std;
class tringle {
private :
    float high ;
    float base ;
public :
    void sethigh(float h) {
        high = h ;
    }
    void setbase(float b ) {
        base = b ;
    }
    int getsize() {
        return base*high*0.5 ;
    }
    void print () {
        cout << "base is " << base <<
             "\n high is " << high <<
             "\nthe size of tringle" << getsize() << endl;
    }

};
int main()
{
    tringle t ;
    t.sethigh (45) ;
    t.setbase (20) ;
    t.print() ;
    return 0;
}