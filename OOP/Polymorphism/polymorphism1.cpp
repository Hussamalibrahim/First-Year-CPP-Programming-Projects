#include<iostream>
using namespace std;
class cpolegon {
protected:
    int weight, hight ;
public:
    void set_values(int w, int h)
    {
        weight = w ;
        hight = h ;
    }
    virtual int area() {
        return 0 ;
    }
};
class triangle : public cpolegon {
public:
    int area () {
        return weight * hight / 2;
    }
};
class rectangular : public cpolegon {
public:
    int area()
    {
        return weight * hight ;
    }
};

int main()
{
    triangle t1 ;
    rectangular r1;
    cpolegon *ptr1  ,*ptr2 ;
    ptr1 =& t1 ;
    ptr2 =& r1 ;
    ptr1->set_values(4,5);
    ptr2->set_values(4,6);
    cout << ptr1->area() << endl;
    cout << ptr2->area() << endl;
    return 0;
}