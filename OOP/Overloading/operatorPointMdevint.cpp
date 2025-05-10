#include <iostream>
using namespace std;
class unary
{
private:
    int x, y;

public:
    unary(int X = 0, int Y = 0) : x(X), y(Y) {}
    void print()
    {
        cout << "x : " << x << "\ty : " << y << endl;
    }
    unary operator+(int n)
    {
         unary t;
        t.x = x + n;
        t.y = y + n;
        return t ;
    }
    unary operator-(int n)
    {
         unary t;
        t.x = x - n;
        t.y = y - n;
        return t ;
    }
    //!c2 = 4+C1
friend unary operator-(int n , unary c8)
{
   unary c9 ;
   c9.x = n - c8.x ;
   c9 . y = n - c8.y ;

return c9 ;//we can do the same in * or /
}
};


int main()
{
    unary c1(1, 2), c2(7, 6), c3(5, 4);
    c2 = c1 + 10;
    c2.print();
    c2= 7-c3;
    c2.print();

    return 0;
}