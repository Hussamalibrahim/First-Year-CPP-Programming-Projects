#include<iostream>
using namespace std;
class rectangle
{
private :
    int *weight, *hight ;
public :
    rectangle (int w , int h)
    {
        weight = new int ;
        hight = new int ;
        *weight = w ;
        *hight = h ;
    }
    int area ()
    {
    return *weight * *hight ;
    }
    ~rectangle()
    {
    delete hight ;
    delete weight ;
    }
};
int main()
{
rectangle r(4,5);
    cout << r.area() << endl;
    return 0;
}