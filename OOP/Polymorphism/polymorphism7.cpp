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
    virtual int area() = 0 ;
    void printarea(){
    cout << this->area() << endl;
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
    cpolegon *ptr1 = new triangle  ,*ptr2 = new rectangular ;
    ptr1->set_values(4,5);
    ptr2->set_values(4,6);
    ptr1->printarea();
    ptr2->printarea();
    cpolegon *ptr[2] = {ptr1,ptr2};
    for (int i =0 ; i < 2 ; i ++)
    {
    ptr[i]->printarea();
    }
    return 0;
}