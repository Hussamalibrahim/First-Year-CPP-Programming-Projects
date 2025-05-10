#include<iostream>
using namespace std;
class arr
{
private:
    int a[3] ;
public:
    arr ()
    {
        for (int i ; i < 3 ; i ++)
        a[i]=i+8;
    }
    int operator[] (int in)
    {
        return a[in];
    }
};


int main()
{
    arr  a ;
    cout << a[0] << endl;
    cout << a[1] << endl;
    return 0;
}