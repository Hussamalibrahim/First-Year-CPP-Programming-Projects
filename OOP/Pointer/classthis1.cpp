#include<iostream>
using namespace std;
class thi_ {
public:
    void addres ()
    {
        cout << this << endl;
    }


};
int main()
{
    thi_ t1,t2, t3 ;
    t1.addres() ;
    t2.addres() ;
    t3.addres() ;
    return 0;
}