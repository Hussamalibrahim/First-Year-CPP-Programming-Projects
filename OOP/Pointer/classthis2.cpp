#include<iostream>
using namespace std;
class thi_ {
    int id ;
public:
    thi_ (int id)
    {
        this->id =id ;
    }
    void addres ()
    {
        cout << id ;
    }
};
int main()
{
    thi_ t1(5);
    t1.addres() ;
    return 0;
}