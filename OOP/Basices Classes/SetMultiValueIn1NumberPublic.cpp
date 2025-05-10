#include<iostream>
using namespace std;
class tringle {
private :
    float high ;
    float base ;
public :
    void sethigh_base(float h, float b) {
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
    tringle t ;
    t.sethigh_base (45, 20) ;
    t.print() ;
    return 0;
}