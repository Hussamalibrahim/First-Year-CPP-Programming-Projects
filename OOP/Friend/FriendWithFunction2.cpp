#include<iostream>
using namespace std;
class doubl_e ;
class rectangle
{
private :
    int weight, hight ;
public :
    rectangle (int w = 0, int h = 0)
    {
        weight = w ;
        hight = h ;
    }
    int area ()
    {
        return weight * hight ;
    }
    friend rectangle doubleit(rectangle r);
};
rectangle doubleit(rectangle r)
{
    rectangle r1 ;
    r1.weight = r.weight * 2 ;
    r1.hight = r.hight * 2 ;
    return r1 ;
}
int main()
{
    rectangle r(4,5), r1;
    cout << r.area() << endl;
    r1 = doubleit(r) ;
    cout << r1.area() << endl;
    return 0;
}