#include<iostream>
using namespace std;
class ev
{
private:
    int num ;
public:
    ev (int n =0)
    {
        num = n ;
    }

    int set()
    {
        return num ;
    }
    operator int ()
    {
        return int(num);
    }
};


int main()
{
    int x = 34 ;
    ev c(12);
    x = c;
    cout << x << endl;
    x=2330;
    c=x;
    cout << c.set() << endl;
    return 0;
}