#include<iostream>
using namespace std;
//calss square
class side 
{
private :
    int value ;
public :
    side (int v)
    {
        value = v ;
    }
    friend class square ;
};
//can tow classes by friend without active line 3 
//becose they not inside function
class square
{
private :
    int weight, hight ;
public :
   /* square (int w = 0, int h = 0)
    {
        weight = w ;
        hight = h ;
    }*/
    void set_value(side val)
    {
        hight = val.value ;
        weight = val.value ;
    }
    int area()
    {
        return weight * hight ;
    }
};
int main()
{
    side val1(5) ;
    square sq ;
    sq.set_value(val1) ;
    cout << sq.area() << endl;
    return 0;
}